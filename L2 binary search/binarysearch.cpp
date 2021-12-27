// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {
//      int start = 0;
//      int end = size-1;

//     //This is normal formula
//     // int mid=(start+end)/2;

//     // This is the optimised formula
//     int mid = start+(end-start)/2;

//    while(start <= end)
//     {
//         if(arr[mid] == key)
//         {
//             return mid;
//         }

//        if(key > arr[mid])
//         {
//           start = mid + 1;
//         }
//         else
//         {
//         end = mid -1;
//         }

//        // int mid=(start+end)/2;

//       mid = start + (end-start)/2;
//    }

//    return -1;
// }

// int main(){

// int even[6] = {2, 4, 6, 8, 12, 18};
// int odd[5] = {11 , 22, 33, 44, 55};

// int index = binarySearch(even , 6, 12);
// cout<<"Index of 12 is "<< index <<endl;

// int index = binarySearch(odd , 5, 11);
// cout<<"Index of 11 is "<< index <<endl;

// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int s = 0;
    int l = n - 1;
    while(s<=l)
    {
        int mid = (s + l) / 2;
        if (x == mid)
        {
            // cout << "number found" << endl;
            return 0;
        }
        if (x > mid)
        {
            s = mid + 1;
        }
        if (x < mid)
        {
            l = mid - 1;
        }
        if(s>l)
        {
            cout<<"Number not found"<<endl;
            break;
        }
         cout << "Loop Check" << endl;
    }
    // cout << "number not found" << endl;
}