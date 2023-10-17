#include<iostream>
using namespace std;
class linklist{
    public:
    int data;
    linklist* next;

    linklist(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};

int main()
{   

linklist* kartikey = new linklist(18);
cout<<kartikey -> data<<endl;
cout<<kartikey -> next<<endl;



}