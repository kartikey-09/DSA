#include<iostream>
using namespace std;
int main()
{
    int k[50][50];
    int i,n,m,j,l,count=1;
    cout<<"Enter the value of 2d array";
    cin>>n;
    cout<<"Enter the value of 2d array";
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
// for linear search 
    cout<<"Enter the digit you want to search: ";
    cin>>l;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if( k[i][j]==l){
                count=0;
                cout<<"Enter number is present"<<endl;
                break;

            }
           

        }
       cout<<endl;
    }   if(count==1){
                cout<<"Enter number is not present"<<endl;
                
            } 

}