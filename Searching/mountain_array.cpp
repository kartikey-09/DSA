#include<iostream>
using namespace std;
int main()
{
    int i,k[50],a[50],key,n,s,mid,e;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    s=0;
    e=n-1;
    mid=(s+e)/2;
    while(s<=e)
    {   
        
        if( k[mid]>k[mid-1]  )
        {
            s=mid+1;
           
        }
        if( k[mid]>k[mid+1] )
        {
            e=mid;
            
        }         
    }
    
cout<<k[mid];

}