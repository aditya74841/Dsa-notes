// #include <bits/stdc++.h>
// using namespace std;
// int firstocc(int arr[], int n, int k)
// {
//     // cout << "aditya" << endl;
//     int ans = -1;
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         // cout<<"ajdkdu"<<endl;
//         if (k == arr[mid])
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (k > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (k < arr[mid])
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int lastocc(int arr[], int n, int k)
// {
//     int ans = -1;
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (k == arr[mid])
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (k > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (k < arr[mid])
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int k;
//     cin >> k;
//     cout << "the first occurence is" << firstocc(a, n, k) << endl;
//         cout << "the first occurence is" << lastocc(a, n, k) << endl;

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
      cout << "the first occurence is" << endl;
     cout << "the first occurence is"  << endl;
}