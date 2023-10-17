#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char>k;
    string s ="kartikey";
    char y;
    for(int i=0; i<s.size(); i++)
    {   
        y=s[i];
        k.push(y);
    }
    string New="";
    char x;
    int j=0;
    while(j<s.size())
    {
        x=k.top();
        New.push_back(x);
        // New.push_back(k.top());
        k.pop();
        j++;
    }
    cout<<endl<<New<<endl;

}


 