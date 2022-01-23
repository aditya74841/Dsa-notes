#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{
    if (n == 0)
        return ;
    static int ans = 0;
    ans += arr[0];
    sum(arr + 1, n-1);

    return ans;
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
    int ans = sum(arr, n);
    cout << "Answer is" << ans << endl;
}