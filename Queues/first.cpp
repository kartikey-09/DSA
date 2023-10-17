#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;

    q.push(10);
    q.push(11);
    q.push(13);

    cout<<endl<<"size of queue is : "<<q.size()<<endl;

    cout<<"Front element is : "<<q.front()<<endl;

    q.pop();

    cout<<"Front element is : "<<q.front()<<endl;

    if(q.empty())
    {
        cout<<"is empty ";
    }
    else
    {
        cout<<"Not empty";
    }

    cout<<endl<<"size of queue is : "<<q.size();

}