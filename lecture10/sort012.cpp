// 1st method

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int one=0;
//     int zero=0;
//     int two=0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]==1)
//         {
//             one++;
//         }
//         else if(v[i]==2)
//         {
//             two++;
//         }
//         else{
//             zero++;
//         }
//     }
//     for(int i=0;i<zero;i++)
//     {
//         cout<<" 0";
//     }
//     for(int i=0;i<one;i++){
//         cout<<" 1";
//     }
//     for(int i=0;i<two;i++)
//     {
//         cout<<" 2";
//     }
// }

// 2nd method

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int i = 0;
//     int j = n - 1;
//     while (i <= j)
//     {
//         if (a[i] > 0 && a[j] == 0)
//         {
//             swap(a[i], a[j]);
//             i++;
//             j--;
//         }
//         else if (a[i] == 0)
//         {
//             i++;
//         }
//         else if (a[j] > 0)
//         {
//             j--;
//         }
//     }
//     i = 0;
//     j = n-1;
//     while (i <= j)
//     {
//         if (a[i] > 1 && a[j] == 1)
//         {
//             swap(a[i], a[j]);
//             i++;
//             j--;
//         }
//         else if (a[i] == 1 || a[i] == 0)
//         {
//             i++;
//         }

//         else if (a[j] > 1)
//         {
//             j--;
//         }
//         // cout<<"Aditya ranjan";
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// 3rd method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (a[m] == 0)
        {
            swap(a[l], a[m]);
            l++;
            m++;
        }
        if (a[m] == 1)
        {
            m++;
        }
        if(a[m]==2)
        {
            swap(a[m],a[h]);
            // m++;
            h--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
