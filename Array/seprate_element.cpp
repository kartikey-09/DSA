#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,kar[50],a=0,b;
    cout<<"Enter the length: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(m=0;m<n;m++)
    {
        cin>>kar[m];
    } b=n-1;
    for(i=0;i<n;i++)
    {
        if (kar[i]==0 && a<b)
        {
           
            kar[a]=0;
            a++;   
                
        }
         if(kar[i]==1  && a<b)
        {
            kar[b]=1;
            b--;
        }  
                    
    }
    cout<<"final array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<kar[i];
    }
    

}