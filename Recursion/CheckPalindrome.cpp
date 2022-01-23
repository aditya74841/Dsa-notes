#include <bits/stdc++.h>
using namespace std;
bool reverse(string s, int st, int e)
{
    if (st > e)
    {
        return 1;
    }

    if (s[st] != s[e])
    {
        return 0;
    }
    else
    {
         return reverse(s, st+1, e-1);
    }
    // st++;
    // e--;
    // return reverse(s, st, e);
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    bool ans = reverse(s, 0, n - 1);
    //    cout<<ans<<endl;

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}