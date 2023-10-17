#include<iostream>
using namespace std;
int main()
{
    int k[20]={3,4,5,7,8,9},r=3,temp[30],m=0,i,n=6;

    
    
   for(i=r;i<n;i++)
   {
    temp[i]=k[m];
    m++;
   }
   for(i=0;i<r;i++)
   {
    temp[i]=k[m];
    m++;
   }
    
    for(i=0;i<n;i++)
    {
        k[i]=temp[i];
    }
    for(i=0;i<n;i++)
    {
       cout<<k[i]<<" ";
    }
    
    
    

}