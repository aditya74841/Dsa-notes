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

    
    for (int j = 0; j < n; j++)
    {
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i][j];
        }
        cout<<"Sum of "<<j+1<<" Column"<<sum<<endl;
    }
   

}