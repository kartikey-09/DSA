#include<iostream>
using namespace std;
int main()
{
    int i,k[50],a[50],key,n,c=0;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    cout<<"enter the key: ";
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(key==k[i])
        {
            a[c]=i;
            c++;
        }
    }
    cout<<"starting postion of key in array is :"<<a[0]<<endl;
    cout<<"last postion of key in array is :"<<a[c-1];
}