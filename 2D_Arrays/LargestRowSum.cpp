#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int ans=0;
    int ans1=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            sum+=a[i][j];
        }
        if(ans<sum)
        {
            ans=sum;
            ans1=i;
        }
        // cout<<"Sum of "<<i+1<<" Row"<<sum<<endl;
    }
    cout<<"Largest Row Sum at index"<<ans1<<endl;
   

}