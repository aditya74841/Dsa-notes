#include <bits/stdc++.h>
using namespace std;
int rakshaBandhan(vector<int> a, int n)
{

    int sum = a[0];
    int count = 0;
    if (a[0] > 0)
    {
        count++;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
        sum += a[i];
        if (sum > 0)
        {
            count++;
        }
        
    }
    return count;
    // Write your code here.
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
   int ans= rakshaBandhan(v,n);
   cout<<ans;
}