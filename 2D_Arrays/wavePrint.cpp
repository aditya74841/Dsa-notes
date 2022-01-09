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

    int x = 0;
    for (int j = 0; j < n; j++)
    {
        // if (x == 0)
        if(j&1)
        // for odd case
        {

            for (int i = 0; i < n; i++)
            {
                cout<<a[i][j]<<" ";
                x=1;
            }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
                x=0;
            }
        }

    }
}