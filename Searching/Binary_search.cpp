
// Find the element using binary search in accending order.

#include<iostream>
using namespace std;
int main()
{
    int i,k[50],key,mid,s,e,n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    cout<<"enter the key: ";
    cin>>key;
    s=0;
    e=n-1;
    mid=(s+e)/2;
    while(s<=e)
    {
        if(key==k[mid])
        {
            break;
        }                                                      
        if(key>k[mid])
        {  
             s=mid+1;
            mid=(s+e)/2;
            
        }
        if(key<k[mid])
        {
         
            e=mid-1;
            mid=(s+e)/2;
        }
    }
    cout<<mid;
}
