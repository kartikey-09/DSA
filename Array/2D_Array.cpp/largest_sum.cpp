#include<iostream>
using namespace std;
int main()
{
      int k[50][50],a[50],i,j,n,m,count=0,p,q,s,pound;
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

    for(i=0;i<n;i++)
    {   count=0;
        for(j=0;j<n;j++)
        {
            count=count+k[i][j];

        }    
         a[i]=count;
           
    }
    pound=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>pound)
        {
            pound=a[i];
        }
    }
    cout<<"Maximus sum : "<<endl<<pound<<" "<<i;
}