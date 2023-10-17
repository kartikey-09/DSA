#include<iostream>
using namespace std;

int sum(int *arr,int n )
{  int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    //cout<<endl<<" Sum is ";
    return s;
}

int main()
{
    
    int i,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int* arr= new int[n];
    cout<<"Enter the elements of array: ";
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<endl<<" Sum is "<<sum(arr,n);
    


}