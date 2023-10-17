#include<iostream>
using namespace std;
int main()
{
   int x=546;
   
}
// int merge(int k[],int s,int mid,int e)
// {   
//       int temp[10],p,q,t=0;
//     for(p=s;p<=mid;p++)
//     {
//         temp[t]=k[p];
//         t++;
//     }
//     for ( q = mid+1; q<=e; q++)
//     {
//         temp[t]=k[q];
//         t++;
//     }

    
// }
// int mergesort(int k[],int s,int e)
// {
  
//     int mid=(s+e)/2;
//     if(s>=e)
//     {
//         return 0 ;
//     }
//     else
//     {
//         mergesort(k,s,mid);
//         mergesort(k,mid+1,e);
//         merge(k,s,mid,e);
//     }    
// }
// int main()
// {
//     int k[10],i,j,s,e,n,mid;
//     cout<<"Enter the size of array :";
//     cin>>n;
//     for ( i = 0; i < n; i++)
//     {
//         cin>>k[i];
//     }
//     for ( i = 0; i < n; i++)
//     {
//         cout<<k[i];
//     }
//     s=0;
//     e=n-1;
//     mergesort(k,s,e);
    
// }

















// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // void merge(vector<int>& arr, int left, int mid, int right) {
// //     int n1 = mid - left + 1;
// //     int n2 = right - mid;
// //     vector<int> L(n1), R(n2);
// //     for (int i = 0; i < n1; i++) {
// //         L[i] = arr[left + i];
// //     }
// //     for (int j = 0; j < n2; j++) {
// //         R[j] = arr[mid + 1 + j];
// //     }
// //     int i = 0, j = 0, k = left;
// //     while (i < n1 && j < n2) {
// //         if (L[i] <= R[j]) {
// //             arr[k] = L[i];
// //             i++;
// //         } else {
// //             arr[k] = R[j];
// //             j++;
// //         }
// //         k++;
// //     }
// //     while (i < n1) {
// //         arr[k] = L[i];
// //         i++;
// //         k++;
// //     }
// //     while (j < n2) {
// //         arr[k] = R[j];
// //         j++;
// //         k++;
// //     }
// // }

// // void mergeSort(vector<int>& arr, int left, int right) {
// //     if (left < right) {
// //         int mid = left + (right - left) / 2;
// //         mergeSort(arr, left, mid);
// //         mergeSort(arr, mid + 1, right);
// //         merge(arr, left, mid, right);
// //     }
// // }

// // int main() {
// //     vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
// //     mergeSort(arr, 0, arr.size() - 1);
// //     for (int x : arr) {
// //         cout << x << " ";
// //     }
// //     return 0;
// // }
