// https: // www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10

#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return count(n - 1) + count(n - 2);
}
int main()
{
    int n;
    cin >> n;

       //recursive ways
      cout<<count(n)<<endl;
    // iterative Ways

    // int j = n;
    // int count = 0;
    // while (n > 0)
    // {
    //     count++;
    //     n--;
    // }
    // while (j > 0)
    // {
    //     count++;
    //     j--;
    //     j--;
    // }
    // cout << count << endl;
}