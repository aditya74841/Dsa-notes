#include <bits/stdc++.h>
using namespace std;
string removeOccurence(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string s,part ;
     cin >> s;
     cin>>part;
     cout<<removeOccurence(s,part);
}