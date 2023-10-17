#include<iostream>
using namespace std;
int main()
{   
    int i= 6;
    int *ptr=&i;
    int num=5;
    cout<<num<<endl;
    cout<<"Address of num is : "<<endl<<&num<<endl;
    // defineing the pointer 
    int *p=&num;
    cout<<"Exact Value "<<*p;
    cout<<endl<<"address of pointer "<<p<<endl;

    // size of pointer
     cout<<"Size of number "<<sizeof(num);
    cout<<endl<<"Size of pointer "<<sizeof(*p);

    // 
    int kar=5;
    int *m=&kar;
    (*m)++;
    cout<<endl<<kar<<endl;
    cout<<*m;
}