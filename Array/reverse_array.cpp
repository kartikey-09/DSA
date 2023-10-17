#include<iostream>
using namespace std;
int main()
{
    int kar[50], n, i, end, start, m, j;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(i=0;i<n;i++)
    {
       cin>>kar[i];
    } 
    end=n-1;
    for(start=0;start<=n/2;start++)
    {
        if(start<=end)
        {
            m=kar[start];
            kar[start]=kar[end];
            kar[end]=m;
            end--;
        }
        else
        {
            break;
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<"["<<kar[j]<<"]"<<" ";
    }   
} 

