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
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            if (count == 1)
            {
                cout << a[i] << endl;
                return 0;
            }
            else
            {
                count = 1;
            }
        }
    }
    if(a[n-1]!=a[n-2])
    {
        cout<<a[n-1];
        return 0;
    }
}