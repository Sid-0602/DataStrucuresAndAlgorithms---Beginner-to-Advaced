#include <iostream>
using namespace std;
#include "import.h" //includig all the code from this file into this main cpp.

#include <stack> //include the inbuilt stack.



int main(){

    stack<int> s1;

    cout<<"**PUSHES AN ELEMENT**"<<endl;
    s1.push(10);

    cout<<"**PUSHES AN ELEMENT**"<<endl;
    s1.push(20);

    cout<<"**PUSHES AN ELEMENT**"<<endl;
    s1.push(30);
    cout<<"**PUSHES AN ELEMENT**"<<endl;
    s1.push(40);

    cout<<s1.top()<<endl;
    
    s1.pop();
    cout<<"Size is: "<<s1.size()<<endl;
    cout<<"**PUSHES AN ELEMENT**"<<endl;
    s1.push(-13);
    cout<<s1.top()<<endl;

    cout<<"Size is: "<<s1.size()<<endl;
    cout<<"**POPS AN ELEMENT**"<<endl;
    s1.pop();
    cout<<"**POPS AN ELEMENT**"<<endl;
    s1.pop();
    cout<<"**POPS AN ELEMENT**"<<endl;
    s1.pop();

    cout<<"Size is: "<<s1.size()<<endl;
    cout<<"**POPS AN ELEMENT**"<<endl;
    s1.pop();
    cout<<"Size is: "<<s1.size()<<endl;
    cout<<"Is the stack empty?? "<<s1.empty()<<endl;





    

}



