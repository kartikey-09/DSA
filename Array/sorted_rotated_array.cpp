#include<iostream>
using namespace std;
cheak(int k[], int i, int n, int count)
{
    for(i=1;i<n;i++)
    {
        if(k[i-1]>k[i])
        {
            count++;
        }

    }
    if(count>1)
    {
        cout<<"Enter array is Not sorted and rotated. ";
    }
    if(count==1)
    {
        cout<<"Enter array  is sorted and rotated. ";
    }
}
int main()
{
    int k[10],i,n,count=0;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"values of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    cheak(k,i,n,count);
}

// int main()
// {
//     int k[10],i,n,count=0;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"values of array: "<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>k[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         if(k[i-1]>k[i])
//         {
//             count++;
//         }

//     }
//     if(count>1)
//     {
//         cout<<"Enter array is Not sorted and rotated. ";
//     }
//     if(count==1)
//     {
//         cout<<"Enter array  is sorted and rotated. ";
//     }

// }