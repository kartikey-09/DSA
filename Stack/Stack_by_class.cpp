#include<iostream>
using namespace std;
class kartik
{
    public:

    int *arr;
    int top;
    int size;

    kartik (int size)
    {
        this -> size = size;
        arr = new int(size);
        top = -1;
    }
    
    // for pushing the elements in array

    void push(int data)
    {
        if(size-top >1)
        {
            top++;
            arr[top]=data;
        }
        else
        {
            cout<<"Stack overflow "<<endl;
        }
    }
    
    // for poping out the data from the array

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
        }
    }

    // for cheaking the top element

    int top_element()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty "<<endl;
        }
    }

    // for cheaking stack is empty or not

    bool empty()
    {
        if(top>=0)
        {
            cout<<"Stack is not empty"<<endl;
            return false;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
    }
};
int main()
{   
    kartik k(5);
    int a,b,c,d,e;
    cout<<"Enter the elemets in stack : ";
    cin>>a;
    cout<<"Enter the elemets in stack : ";
    cin>>b;
    cout<<"Enter the elemets in stack : ";
    cin>>c;
    cout<<"Enter the elemets in stack : ";
    cin>>d;
    cout<<"Enter the elemets in stack : ";
    cin>>e;

    k.push(a);
    k.push(b);
    k.push(c);
    k.push(d);
    k.push(e);

    cout<<"top element is : "<<k.top_element()<<endl;

    k.pop();

    cout<<"top element is : "<<k.top_element()<<endl;
  
    k.empty();

}