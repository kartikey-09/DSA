#include<iostream>
using namespace std;
int main()
{
    int a[50], sum=0, n, i;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    cout<<"Enter the values of array "<<endl;
    
    for(i=0; i<n; i++)
    {   
        cin>>a[i];
        sum=sum+a[i];

    }
    cout<<"Sum of array: "<<sum;
}