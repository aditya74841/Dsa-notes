#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int checkbetween(int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(prime(i))
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<checkbetween(n)<<endl;
}