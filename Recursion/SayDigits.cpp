#include <bits/stdc++.h>
using namespace std;
void sayDigits(vector<string>v,int n)
{
    if(n==0)
    {
        return;
    }
    int temp=n%10;
    sayDigits(v,n/10);
    cout<<v[temp]<<" ";
    
}
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    v.push_back("Zero");
    v.push_back("One");
    v.push_back("Two");
    v.push_back("Three");
    v.push_back("Four");
    v.push_back("Five");
    v.push_back("Six");
    v.push_back("Seven");
    v.push_back("Eight");
    v.push_back("Nine");
    sayDigits(v,n);
}