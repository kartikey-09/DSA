#include<iostream>
using namespace std;
int main()
{
    int k[50][50],i,j,n,m,count=0,p,q;
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

    // for sum of row's 

    cout<<"Enter the row who's sum you want :";
    cin>>p;
    
        for(j=0;j<n;j++)
        {
            count=count+k[p][j];
        
        
    }
    cout<<"Sum is row's : "<<count<<endl;


    // for sum of col's 

    cout<<"Enter the col's who's sum you want :";
    cin>>q;
    for(i=q;i<n;i++)
    {
        count=count+k[i][q];
    }
    cout<<"Sum is col's : "<<count;
}