// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,k[30],f[30],n,s=0,e;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the elements: ";
//     for(i=0;i<n;i++)
//     {
//         cin>>k[i];
//     }
//     e=n-1;
//     for(i=0;i<n;i++)
//     {
//         if(k[i]!=0)
//         {
//             f[s]=k[i];
//             s++;
//         }
//         else
//         {
//             f[e]=k[i];
//             e--;
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<f[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;
void archika (int k[],  int n,  int f[], int e, int s  )
{
    int i;
   
    e=n-1;
    for(i=0;i<n;i++)
    {
        if(k[i]!=0)
        {
            f[s]=k[i];
            s++;
        }
        else
        {
            f[e]=k[i];
            e--;
        }
    }
}
void print(int f[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<f[i]<<" ";
    }
    
}


int main()
{
    int i,j,k[30],f[30],n,s=0,e;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }
    e=n-1;
    archika(k,n,f,e,s);
    print(f,n);


}

