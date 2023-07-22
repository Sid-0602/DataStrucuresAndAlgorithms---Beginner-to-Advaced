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
        TrieNode *child; //it points to children index and of datatype TrieNode.  
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

};
