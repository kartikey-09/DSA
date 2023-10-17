#include<iostream>
// 1. for initialise the vector we use this 
#include<vector>
using namespace std;

int main()
{   
    // 2.  here we are defining that we have a vector v which is in INT 
    vector<int> v;

    // 3. the maximum element we can fill is known as capicity
    cout<<"capacity -> "<<v.capacity()<<endl;

    // 4. for pushing the element in vector we use this 
    v.push_back(1);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;

    // for cheaking the element of that vector
    cout<<"size -> "<<v.size()<<endl;



}