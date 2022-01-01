#include <bits/stdc++.h>
using namespace std;
bool valid(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'z') || (a >= '0' && a <= '9'))
    {
        return 1;
    }
    return 0;
}

bool checkpalidrome(string s)
{
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp += s[i];
        }
    }
      transform(temp.begin(),temp.end(),temp.begin(),::tolower);

      int st=0;
      int e=temp.length()-1;
      while(st<=e)
      {
         if(temp[st]!=temp[e])
         {
             return 0;
         }
         else
         {
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
    if(checkpalidrome(s))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}