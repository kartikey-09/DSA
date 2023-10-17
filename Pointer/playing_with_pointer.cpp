#include<iostream>
using namespace std;
int main()
{
   int  arr[10]={2,5,7};
    int *p=&arr[0];
    cout<<arr<<endl;

    cout<<arr[0]<<endl;

    cout<<&arr<<endl;

    cout<<*arr<<endl;

    cout<<*arr+1<<endl;

    cout<<*(arr+1)<<endl;

    cout<<(*arr)+5<<endl;

    cout<<p<<endl;
    
    cout<<*p;

    

      
}