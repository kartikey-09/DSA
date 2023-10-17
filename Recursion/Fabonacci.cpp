#include<iostream>
using namespace std;

void fab(int a,int b,int n,int c,int count)
{   
   if(count==n)
    {
        return ;
    }
    else {  
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    count++;
    fab(a,b,n,c,count);
    }
}

int main()
{
    int a=0,b=1,n,count=0,c;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    fab(a,b,n,c,count);
    
}


