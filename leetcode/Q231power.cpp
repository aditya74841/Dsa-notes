#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
//   int ans=1;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            cout << "true" << endl;
        }
        // if(ans<INT_MAX/2)
        // ans=ans*2;

    }
    cout << "false" << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//      int count = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         if (bit == 1)
//         {
//             count++;
//         }
//         cout<<"Aditya Ranjan"<<endl;
//         n = n >> 1;
//     }
//     if (count == 1)
//     {
//         cout << count << endl;
//     }
//     else
//     {
//         cout << "-1" << endl;
//     }
// }