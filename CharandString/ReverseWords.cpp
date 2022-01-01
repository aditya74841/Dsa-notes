#include<bits/stdc++.h>
using namespace std;
string  Reverse(string s)
{
    int n=s.length();
    int st=0;
    int e=n-1;
    while(st<=e)
    {
       swap(s[st],s[e]);  
       st++;
       e--;
    }
    s+=' ';
    return s;
    
}
string  ReverseWords(string s)
{
     string temp ;
     string ans="";
    for(int i=0;i<s.length();i++)
    {

        if(s[i]==' ')
        {
           ans +=Reverse(temp);
           temp="";
        }
          temp+=s[i];
    }
    ans+=Reverse(temp);

    return ans;
}
int main()
{
    string s="My name is Aditya";
    cout<<s<<endl;
    cout<<ReverseWords(s);
    

}