#include <bits/stdc++.h>
using namespace std;

#include "trieNode_class.h"


/*     ||| TrieNode Class ||| 

class TrieNode{

    public: 
        char data;
        TrieNode ** children;
        bool isTerminal; 

    
    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26]; //total of lower case alphabets. 

    

        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        
        isTerminal = false;
    }
    

};

*/
class Trie{
    
    TrieNode *root;

    // the functions are: Insert, search and remove. 
    public:
    
    //constructor: 
    Trie(){
        root = new TrieNode('\0');
    };

    //insert function: insert a word.

    void insertWordHelper(TrieNode *root,string word){
        // base case:
        //when the word size is 0, then return and set isTerminal = true. 
        if(word.size()==0){
            root->isTerminal = true;
            return;
        }

        //small calculation: 
        int index = word[0] - 'a'; //mapping word with index. word[0] represents first letter of word.
        TrieNode *child; //it points to children index and of datatype TrieNode. It keeps changing. 
        if(root->children[index]!=NULL){
            child = root->children[index]; //child has address to the index 
        }else{
            //the letter is not present, hence create a new node: 
            child = new TrieNode(word[0]); //assign the value of first letter in trie. 
            root->children[index] = child; 
        }

        //recursive call: 
        insertWordHelper(child,word.substr(1)); //pass the value of new root (i.e child) and pass the reduced substring. 

    }

    void insertWord(string word){
        insertWordHelper(root,word);
    }

    //search function in tries: 

    bool searchHelper(TrieNode*root, string word){
        //base case: if word length is zero, then check if root->terminal is true or not to check for terminal. 
        if(word.size()==0){
            return root->isTerminal;
        }

        //small calculation: 
        int index= word[0]-'a';
        if(root->children[index]!= NULL){
            return searchHelper(root->children[index],word.substr(1));
        }
        else{
            return false;
        }

    }   

    bool search(string word){
        if(word.length()==0){
            return false;
        }
        
        return searchHelper(root,word);
    }

    //remove function: 

    void removeWordHelper(TrieNode* root,string word){
        //base case: to remove a word just make isTerminal of the word as false.

        if(word.size()==0){
            root->isTerminal = false;
            cout<<"Word deleted successfully!!"<<endl;
            return;
        }

        //small calculations: 
        int index = word[0] - 'a';
        if(root->children[index]!=NULL){
            return removeWordHelper(root->children[index],word.substr(1));
        }
        else{
            cout<<"Cannot delete as word does not exist!!"<<endl;
            return;
        }

    }

    void removeWord(string word){
        removeWordHelper(root,word);
    }
};


int main(){
    int choice;
    cout<<"Enter a choice: "<<endl;
    cin >> choice;
    Trie t;

    while (choice != -1) {
        string word;
        bool ans;
        switch (choice) {
            case 1:  // insert
                cout<<"Enter the word to insert: ";
                cin >> word;
                t.insertWord(word);
                break;
            case 2:  // search
            cout<<"Enter word to be searched: ";
                cin >> word;
                cout << (t.search(word) ? "true\n" : "false\n");
                break;
            case 3:  // search
            cout<<"Enter word to be removed: ";
                cin >> word;
                t.removeWord(word);
                break;
            default:
                return 0;
        }
        cout<<"Enter a choice: "<<endl;
        cin >> choice;
    }

    return 0;
}
