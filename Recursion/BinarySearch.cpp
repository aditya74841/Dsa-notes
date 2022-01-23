#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[], int start, int end, int k)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return BinarySearch(arr, mid + 1, end, k);
    }
    else
    {
        return BinarySearch(arr, start, mid - 1, k);
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[10];
    // int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    bool ans = BinarySearch(arr, start, end, k);
    if (ans)
    {
        cout << "Number found" << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }
}