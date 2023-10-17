#include<iostream>
using namespace std;
int main()
{
  int  arr_1[5]={2,4,7,8,9};
  int  arr_2[3]={1,3,5};
  int  i=0,n,j=0,start,p,h=0;
  int  arr_3[8];

       for(p=0;p<8;p++)
    {
        if(arr_1[i]<arr_2[j] )
        {
            arr_3[h]=arr_1[i];
           i++ ;
           h++ ;           
        }
        if(arr_2[j]<arr_1[i])
        {
            arr_3[h]=arr_2[j];
           j++ ; 
           h++;
        }
        if(i>=5)
        {
            for(n=j;n<8;n++)
            {
                arr_3[h]=arr_2[n];
                i++;
                h++;
            }
        }
        if(j>=3)
        {
            for(n=i;n<8;n++)
            {
                arr_3[h]=arr_1[n];
                i++;
                h++;
            }
        }
        
    }
    for(p=0;p<8;p++)
    {
        cout<<arr_3[p]<<" ";
    }

}