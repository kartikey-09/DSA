#include<iostream>
using namespace std;
int sum(int n,int p,int k[],int count)
{   
    if(p==n)
    {
        return count;
    }
    if(p<=n-1)
    {
        count=count+k[p];
        p++;
        sum(n,p,k,count); 
    }
}
int main()
{
    int k[10],i,p=0,n,count=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the Elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
     for(i=0;i<n;i++)
    {
        cout<<" "<<k[i];
    }
    cout<<endl;
    
    cout<<"Sum is : "<<sum(n,p,k,count);;
     
}