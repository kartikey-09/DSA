#include<iostream>
using namespace std;
bool palidrome(string k,int i,int j)
{
    if(i>j)
    {
        return true ;
    }
    else
    {
        if(k[i]!=k[j])
        {
            return false;
        }    
        else
        {
            i++;
            j--;
          return palidrome(k,i,j);
        }    
    }
}
int main()
{
    string k;
    int n,i,j;
    cout<<"Enter the elements of string : ";
    cin>>k;
    j=k.length()-1;
    cout<<j;
    i=0;
    palidrome(k,i,j);
    cout<<endl<<palidrome(k,i,j);
}