#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            ans.push_back(v1[i]);
            i++;
        }
        else if (v1[i] > v2[j])
        {
            ans.push_back(v2[j]);
            j++;
        }
        else
        {
            ans.push_back(v1[i]);
            ans.push_back(v2[j]);
            i++;
            j++;
        }
    }
    while (i<n)
    {
       ans.push_back(v1[i]);
       i++;
    }
    while (j<m)
    {
       ans.push_back(v2[j]);
       j++;
    }
    
    
    for (auto i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}