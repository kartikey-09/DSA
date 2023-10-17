#include<iostream>
using namespace std;
int include(int k[], int n, int ans)
{
    
}
int exclude(int k[], int n, int ans)
{   
   
}

int subset(int k[], int n, int ans)
{   
    cout<<" "<<ans;
    include();
    exclude();
    
}
int main()
{
    int n,k[10],i,ans=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for ( i = 0; i < n; i++)
    {
        cin>>k[i];
    }
     for ( i = 0; i < n; i++)
    {
        cout<<" "<<k[i];
    }
    subset(k,n,ans);  
}