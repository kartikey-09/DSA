#include<iostream>
using namespace std;
int main()
{
    char k[20];
    int n,i,count=0;
    cout<<"Enter the string ";
    cin>>k;
    for(i=0;k[i]!='\0';i++)
    {
        count=count+1;

    }
    cout<<"the size of string is: "<<count;
    

}