/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             if (col <= n - i + 1)
//                 cout << col << " ";
//             else
//                 cout << "*"
//                      << " ";
//             col++;
//         }
//         int start = i - 1;

//         while (start)
//         {
//             cout << "*"
//                  << " ";
//             start--;
//         }
//         col = 5;
//        int  value=5;
//         while (col <= n * 2)
//         {

//             if(col)
//             cout<<value<<" ";
//             value--;
//             col++;
//         }
//         value--;

//         cout << endl;
//         i++;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=n;j++)
        {
           if(j<=n-i+1)
           {
               cout<<j<<" ";
           }
           else
           {
               cout<<"*"<<" ";
           }
        }
        for(int j=1;j<=n;j++)
        {
           if(j>=i)
           {
               cout<<n-j+1<<" ";
           }
           else
           {
               cout<<"*"<<" ";
           }
        }
        cout<<endl;
    }
}
