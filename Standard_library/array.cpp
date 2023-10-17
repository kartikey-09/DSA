#include<iostream>
#include<array>

using namespace std;
int main()
{
    int k[3]={1,2,3};

// 1. for printing a array
array<int,5>a ={1,2,3,4};

// 2. for printing the size of array
int size=a.size();
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}

// 3. for printing any number on that particular index

    cout<<"element on 2nd index -> "<<a.at(2)<<endl;

// 4. for printing is it the aarray is empty or not 

    cout<<"array is empty or not ->"<<a.empty()<<endl;

// 5. for printing number on first and last place 

    cout<<"first element -> "<<a.front()<<endl;
    cout<<"last element -> "<<a.back()<<endl;


}