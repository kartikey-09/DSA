#include<iostream>
using namespace std;
int main()
{
    int k[50][50],i,j,m,n;
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

    int  sr=0, sc=0 , er=n-1 , ec=m-1, count=0  , total = n*m;

    while(count<total)
    {
        for(i=sc; count<total && i<=ec;i++)
        {
            cout<<k[sr][i]<<" ";
            count++;
        }
        sr++;
        for(i=sr; count<total && i<=er;i++)
        {
            cout<<k[i][ec]<<" ";
            count++;
        }
        ec--;
        for(i=ec; count<total && i>=sc;i--)
        {
            cout<<k[er][i]<<" ";
            count++;
        }
        er--;
        for(i=er; count<total && i>=sr;i--)
        {
            cout<<k[i][sc]<<" ";
            count++;
        }
        sc++;

    }    


    
}