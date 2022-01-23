#include<bits/stdc++.h>
using namespace std;
void factorial(int n)
{
    if(n==0)
    {
        return;
    }
    static int a=0;
    static int b=1;
    int sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
    factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    
}