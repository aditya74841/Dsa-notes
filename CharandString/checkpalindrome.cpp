#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    int n = s.size();
    int st = 0;
    int e = n - 1;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    while (st <= e)
    {
        if(s[st]>=32&&s[st]<=64)
        {
            st++;
        }
        if(s[e]>=32&&s[e]<=64)
        {
           e--;
        }
        if(s[st]!=s[e])
        {
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}
int main()
{
    string s;
    cin >> s;
    if(palindrome(s))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}