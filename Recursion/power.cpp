#include<iostream>
using namespace std;
int pow(int m,int n,int count,int j)
{
    if(count==n)
    {
        return j; 
    }
    else
    {
        count++;
        j=j*m;
        pow(m,n,count,j);
    }
}
int main()
{   int m,n,count=0,j=1;
    cout<<"Enter the value of M : ";
    cin>>m;
    cout<<"Enter the value of N : ";
    cin>>n;
    pow(m,n,count,j);
    cout<<endl;
    cout<<pow(m,n,count,j);
}