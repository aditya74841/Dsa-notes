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
    vector<int> v;
    // sort(a,a+n);
    for (int i = 0; i < n - 1; i++)
    {
        int temp = abs(a[i]) - 1;

        if (a[temp] < 0)
        {
            // v.push_back(temp + 1);
            cout<<temp+1<<" ";
        }
        else
            a[temp] = -a[temp];

       /* // if((a[i]^a[i+1])==0)
        // {
        //     cout<<a[i]<<" ";
        // }*/
    }
}