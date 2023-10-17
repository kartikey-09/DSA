#include<iostream>
using namespace std;
int main()
{
    int kar[5]={3,4,7,8,1};
    int i, n, key;
    cout<<"enter the number to search: "<<endl;
    cin>>key;
    for(i=0;i<5;i++)
    {
        if(kar[i]==key)
        {
            cout<<"found the key"<<endl;
            break;
        }
        
    }
    if(kar[i]!=key)
        {
            cout<<"not found ";
        }
}