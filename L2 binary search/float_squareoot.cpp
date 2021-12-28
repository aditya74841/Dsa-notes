#include <bits/stdc++.h>
using namespace std;
int squareroot(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n,int precision)
{
    double factor=1;
    double num=squareroot(n);
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;

        for(double j=num;j*j<n;j=j+factor)
        {
            num=j;
        }
    }
    return num;
}
int main()
{
    int x;
    cin >> x;
    cout << "square root is "<< precision(x,3)<<endl;
}