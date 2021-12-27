// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    vector<int> arr1;
    vector<int> arr2;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            // cout<<arr1[i];
             i++;
             j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
}