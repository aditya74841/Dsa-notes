// https://leetcode.com/problems/search-a-2d-matrix-ii/

// Leetcode question no 240

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
    int target;
    cin >> target;

    int rowIndex = 0;
    int colIndex = n - 1;

    while (rowIndex < n && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];

        if (element == target)
        {
            cout << "Element found" << endl;
            return 0;
        }

        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    cout << "Element Not Found" << endl;
}