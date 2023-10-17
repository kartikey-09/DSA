#include<iostream>
using namespace std;
int pivot(int k[])
{   int s,e,mid;
    s=0;
    e=4;
    mid=(s+e)/2;
    while(s<e)
    {
    if(k[mid]>=k[0])
    {
        s=mid+1;
        
    }
    else
    {
        e=mid;

    }
        mid=(s+e)/2;

    }
    return mid;
    
}
int main()
{
    int k[50]={7,9,11,1,3};
    int mid,s,e;

    
    cout<<pivot(k);

}