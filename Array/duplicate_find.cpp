
#include<iostream>
using namespace std;

int main()
{
    int n, i, a[10], j;

    cout<<"Enter no. of elements in array: "<<endl;
    cin>>n;

    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[j]<<endl;
            }
        }
    }
   }
