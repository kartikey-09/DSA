#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,kar[50],m,count=0;
    cout<<"enter the length of array: "<<" ";
    cin>>n;
    cout<<"enter the values of array: "<<" ";
        for(m=0;m<n;m++)
        {
            cin>>kar[m];
        }
    
int ans = 0;

for(int i=0; i<n; i++) 
{
ans=ans^kar[i];
}
cout<<ans<<" ";

}
