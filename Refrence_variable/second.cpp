#include<iostream>
using namespace std;

void update(int n)
{
    n++;
}
// (int& n) this is used for paas by refrence
 update2(int& n)
{
    n++;
}

int main()
{
    int n=5;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"after "<<n<<endl<<endl;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"after "<<n<<endl;


}