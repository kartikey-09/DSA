#include<iostream>
using namespace std;
int main()
{
    int n,kar[50],i,j,sum,required,k;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"values of array: "<<endl;
    for(k=0;k<=n;k++)
    {
        cin>>kar[k];
    }
    cout<<"Enter the sum you want:  ";
    cin>>required;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=kar[i]+kar[j];
            if (sum==required)
            {
                cout<<kar[i]<<" "<<kar[j]<<" ";
            }
            
        }
    }
    
}