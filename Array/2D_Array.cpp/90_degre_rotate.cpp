#include<iostream>
using namespace std;
int main()
{
    int k[50][50],i,j,n,m,p;

    cout<<"Enter the row's : ";
    cin>>n;
    cout<<"Enter the col's : ";
    cin>>m;
    cout<<"Enter the element of 2-D array : ";
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>k[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)

        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }    
        cout<<endl;

    // Transpose a matrix

    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            p=k[i][j];
            k[i][j]=k[j][i];
            k[j][i]=p;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)

        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }    
        cout<<endl;

    // for reverse the array
        
       int l++,q=m-1,s;

    while(i<n/2)
    {
        for(j=0;j<m;j++)
        {
           
            
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)

        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }    
        cout<<endl;
        

    
    
    
}