#include<iostream>
using namespace std;

bool search(int k[],int n,int p,int s)
{   
    if(p==n)
    {   
        return false;        
    }
    if(p<=n-1)
    {
        if(k[p]==s)
        {
            return true;           
        }
        else 
        {
        p++;
        search(k,n,p,s);
        }
    }   
}
int main()
{
    int k[10],i,n,p=0,s;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<k[i];
    }
    cout<<endl;
    cout<<"Enter the elements you need to find : ";
    cin>>s;
    if(search(k,n,p,s)==true)
    {
        cout<<"Element is found";
    }
    else
    {
      cout<<"NOT-found";
    }

}