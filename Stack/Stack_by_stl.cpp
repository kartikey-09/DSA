#include<iostream>
#include<stack>
using namespace std;
int main()
{   
    // creating of stack
    stack<int>k;

    // push operation
    k.push(10);
    k.push(11);
    k.push(12);

    // pop operations
    
    k.pop();
    
    // Top element

    cout<<"The top element is "<<k.top()<<endl;

    // cheak wheather stack is empty or not

    if(k.empty())
    {
        cout<<"Stack is empty ";
    }
    else
    {
        cout<<"Stack is not empty";
    }
    cout<<endl<<"Size of stack is : "<<k.size()<<endl;

}