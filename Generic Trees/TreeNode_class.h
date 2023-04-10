#include <vector>
using namespace std;
//initializing datatype as T:
template <typename T>
class TreeNode{
    public: 
    T data;
    vector <TreeNode*> children; 

    //constructor:

     TreeNode(T data){
        this->data = data;
     }

   //destructor: 

   ~TreeNode(){
      for(int i=0; i<children.size();i++){
         delete children[i];
      }
   }

};

