#include <bits/stdc++.h>
using namespace std;
void replaceSpaces(string s)
{
    string temp="";
    string ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
          ans+=temp;
          ans+="@40";
          temp="";
          i++;
        }
      temp+=s[i];  
    }
    ans+=temp;
    cout<<ans;
}
int main()
{
    string s="My name is Aditya";
    // cin >> s;
    replaceSpaces(s);
}