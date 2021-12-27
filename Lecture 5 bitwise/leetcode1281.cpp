#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,mul=1;
    while(n!=0)
    {
    int x=n%10;
    sum+=x;
    mul*=x;
    n=n/10;
    }
    // cout<<sum<<endl;
    // cout<<mul<<endl;
    cout<<mul-sum<<endl;

    
}