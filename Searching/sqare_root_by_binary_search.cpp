#include<iostream>
using namespace std;
int main()
{
    int k[1000],mid,e,s,a,i,sum;
    cout<<"enter the number for sqare root: ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        k[i]=i+1;
    }
    s=0;
    e=a-1;
    mid=(s+e)/2;
    while(s<=e)
    {
        if(k[mid]*k[mid]>a)
    {
        e=mid-1;
    }
    if(k[mid]*k[mid]<a)
    {
        s=mid+1;
    }
    if(k[mid]*k[mid]==a)
    {   
         cout<<k[mid];
         break;
    }
    mid=(s+e)/2;
    }   
}