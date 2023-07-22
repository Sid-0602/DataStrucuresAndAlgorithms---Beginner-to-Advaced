#include <bits/stdc++.h>
using namespace std;

//trie can be used to construct a dictionary of words.

class TrieNode{

    public: 
        char data;
        TrieNode ** children;
        bool isTerminal; 

    //constructor: 
    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26]; //total of lower case alphabets. 

        //initialise this empty array with null: 

        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        
        isTerminal = false;
    }
    
    ~TrieNode(){
        delete [] children;
    }

};


int main(){

}