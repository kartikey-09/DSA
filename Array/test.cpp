#include<iostream>
using namespace std;
int[] removeDuplicate(int[] values)
{
int n ; // n is the size of array
n=sizeof(value)/sizeof(arr[0]);

if(n==0 || n==1)
{ return values ;}

sort (values,values+n); // for sorting the given array 

int temp[n];
int j=0;
for(int i=0;i<n-1;i++)
{
if(values[i]!=values[i+1])
{
temp[j++]=values[i];
}
}
temp[j++]=arr[n-1];
}
return temp; // returing the array of unique elements.
int main()
{

}