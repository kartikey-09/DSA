#include<iostream>
using namespace std;
int main()
{
    int k[50][50],a[50][50],i,j,m,n;
    cout<<"Enter the value of row's ";
    cin>>n;
    cout<<"Enter the value of col's ";
    cin>>m;
    cout<<"Enter the element of array: ";
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
    
    for(j=0;j<n;j++)
    {
        if(j%2==0)
    {
        for(i=0;i<n;i++)
        {   
            cout<<k[i][j]<<" ";
            
        }
        cout<<endl;
            
    }
    else
    {
        for(i=n-1;i>=0;i--)
        {
            cout<<k[i][j]<<" ";
            
        }
        cout<<endl;
    }

    }

     

}

