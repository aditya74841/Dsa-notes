#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int ans1 = a[0];
    int ans2 = b[0];

    for (int i = 1; i < n; i++)
    {
        ans1 = ans1 * 10 + a[i];
    }
    for (int i = 1; i < m; i++)
    {
        ans2 = ans2 * 10 + b[i];
    }

    int sum = ans1 + ans2;
    vector<int> ans;
    while (sum > 0)
    {
        int m;
        m = sum % 10;
        ans.push_back(m);
        sum = sum / 10;
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    
}