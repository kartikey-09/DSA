#include<iostream>
using namespace std;
int main()
{   // n= number of students
    // m=number of books
    int k[]={10,20,30,40};
    int n=2,sum=0,s,e,mid,i,m=4,page_sum=0,student_count;
    // m = no. of books , n = No. of students
    // total no. of pages
    for(i=0;i<m;i++)
    {
        sum=sum+k[i];
    }
    cout<<"sum is : "<<sum;
    s=0;
    e=sum;
    mid=(s+e)/2;
    student_count=1;
    while(s<=e)
    {   
        for(i=0;i<m;i++)
        {
            page_sum=page_sum+k[i];

            if(page_sum+k[i]<=mid)
            {
               page_sum=page_sum+k[i];
            }
            else
            {  cout<<" "<<page_sum<<" "<<endl;
                student_count++;
                if(student_count>m || k[i]>mid)
                {
                    break;
                }
            }
        
        }
        s=mid+1;
        mid=s+(e-s)/2;
       

    }   

    

     
}