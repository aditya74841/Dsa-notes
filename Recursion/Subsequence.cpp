#include <bits/stdc++.h>
using namespace std;
void solve(string s, string output, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    solve(s, output, index + 1, ans);

    char ch = s[index];
    output += ch;
    solve(s, output, index + 1, ans);
}
vector<string> subsequence(string s)
{
    vector<string> ans;

    string output = "";
    solve(s, output, 0, ans);
    return ans;
}
int main()
{
    string s;
    cin >> s;

    vector<string> ans = subsequence(s);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}