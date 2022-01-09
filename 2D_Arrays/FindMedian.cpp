
// https://leetcode.com/problems/search-a-2d-matrix/
// Leetcode question no 74;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int start = 0;
    int end = (n * n) - 1;

    int mid=start+(end-start)/2;

    cout<<matrix[mid][mid]<<endl;
}