#include <vector>
using namespace std;
//initializing datatype as T:
template <typename T>
class TreeNode{
    public:
    T data;
    vector <TreeNode <T>*> children;

    //constructor: 

    TreeNode(T data){
        this->data = data;
    }

};