#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
   vector<int>temp;
   for(int i=0;i<a.size();i++)
   {
       temp[(i+k)%a.size()]=a[i];
   }
     a=temp;
}