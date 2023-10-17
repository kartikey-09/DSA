#include<iostream>
using namespace std;
int main()
{
    int kar[50],arc[50],mil[50],i,j,k,m,n, s=0;;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"values of array: "<<endl;
    for(k=0;k<n;k++)
    {
        cin>>kar[k];
    }
    cout<<"values of array: "<<endl;
    for(k=0;k<n;k++)
    {
        cin>>arc[k];
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(kar[i]==arc[j])
            {   
                mil[s]=arc[j];
                s++;  
                arc[j]=INT8_MAX;
                break;           
            }
           
        }
    }
    for(m=0;m<s;m++)
    {
         cout<<"final array: "<<" "<<mil[m]<<endl;
    }



}