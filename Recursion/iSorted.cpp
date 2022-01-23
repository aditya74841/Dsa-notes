#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, n - 1);
        return ans;
    }
    // if (arr[n] < arr[n - 1])
    // {
    //     return false;

    //     // cout << "Not Sorted";
    // }
    // isSorted else
    // {
    //     isSorted(arr, n - 1);
    // }

    // return 0;
    // // cout<<"Aditya";
    // // return 1;
}
int main()
{
    int n;
    cin >> n;
    int arr[10];
    // int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = isSorted(arr, n);
       if(ans)
       {
           cout<<"Array Sorted"<<endl;
       }
       else
       {
           cout<<"Array Not Sorted"<<endl;
       }
}