#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int st, int e)
{
    if (st > e)
    {
        return ;
    }
    swap(s[st], s[e]);
    st++;
    e--;
     reverse(s, st, e);
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    reverse(s, 0, n - 1);
    cout<<s;
//    string ans= reverse(s, 0, n - 1);
//    cout<<ans<<endl;
  
}