#include<iostream>
using namespace std;
int main()
{
        int i,j,k,key,mil,n,kar[50];
    cout<<"enter the length of array: ";
    cin>>n;
    cout<<endl<<"enter the value of array: ";
       for(i=0;i<n;i++)
        {
            cin>>kar[i];
        }
        for(k=0;k<n; )
        {                        
            if(k==n-1)
            {
                cout<<kar[k];
                break;
            }
            else
            {
            key=kar[k];         
            mil=kar[k+1];       
            j=key;              
            key=mil;            
            mil=j;              
            cout<<key<<" "<<mil<<" ";               
            k=k+2;
            }

        }
        
        
    
    
    
}