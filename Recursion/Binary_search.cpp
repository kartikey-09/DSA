#include<iostream>
using namespace std;
int search(int s,int e,int num,int k[],int mid)
{     
   if(s<e)
   {
   mid=(s+e)/2;
   if(num>k[mid])
   {
    s=mid+1;
   } 
   if(num<k[mid])
   {
    e=mid-1;
   }
   if(num==k[mid])
   {
    return mid;
   }
   search(s,e,num,k,mid);

}
else
{
    return 0;
}
} 
int main()
{
    int i,mid,s,e,num,k[10],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the Elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
     for(i=0;i<n;i++)
    {
        cout<<" "<<k[i];
    }
    cout<<endl;
    s=0;
    e=n-1;
    mid=(s+e)/2;
    cout<<"Enter the element to find : ";
    cin>>num;
    cout<<" "<<search(s,e,num,k,mid);
}