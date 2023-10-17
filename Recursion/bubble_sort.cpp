#include<iostream>
using namespace std;
void bubble(int n,int i,int j,int k[])
{
    if(n==0 || n==1)
    {
        return   ;
    }
    else
    {   for ( i = 0; i <n-1; i++)
    {
        if(k[i]>k[i+1])
        {
            swap(k[i],k[i+1]);
        }  

    }
    bubble(n-1,i,j,k);
}
}
int main()
{
    int n,i,j,k[10];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<k[i]<<" ";
    }
    
    bubble(n,i,j,k);
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<k[i]<<" ";
    }

}