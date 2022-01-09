#include <bits/stdc++.h>
using namespace std;
bool isPresent(int a[][3], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(a[i][j]==target)
           {
               return 1;
           }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[3][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;

    if (isPresent(a, target, n))
    {
        cout << "Number Found" << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }
}