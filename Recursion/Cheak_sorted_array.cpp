#include<iostream>
using namespace std;
bool cheak(int k[],int n,int p)
{
    if(p!=n-1)
    {
    if(k[p]<k[p+1])
    {   p++;
        cheak(k,n,p); 
    }
    else
    return false; 
    }
    else
    return true;

}
int main()
{
    int k[10],i,n,p=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }  
    cheak(k,n,p);
    if(cheak(k,n,p)==true)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"false";
    }
}