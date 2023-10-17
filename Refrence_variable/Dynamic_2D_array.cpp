#include<iostream>
using namespace std;
int main()

{
    int i,p,s,n,m;
    cout<<"Enter the rows: ";
    cin>>n;
    cout<<"Enter the col : ";
    cin>>m;
    int** arr = new int*[n];

    for(i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    
    // taking input
    for(p=0;p<n;p++)
    {
        for(s=0;s<m;s++)
        {   cout<<" ";
            cin>>arr[p][s];
        }

    }
    // Printing output
     for(p=0;p<n;p++)
    {
        for(s=0;s<m;s++)
        {
            cout<<arr[p][s]<<" ";
        }
        cout<<endl;
    }

    // deleting array
    for(i=0;i<n;i++)
    {
       delete[] arr[i];
    }

    delete[]arr;
    

       
}