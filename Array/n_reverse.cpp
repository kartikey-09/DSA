#include<iostream>
using namespace std;
int main()

    {
    int a[7]={6,2,3,4,1,5}, n=3, i, temp, m ;
    
    m=n;
    for(i=0;i<=n/2;i++)
    {
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
        m-- ;
    }

    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
}
