// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x == 0)
//             count++;
//         v.push_back(x);
//     }
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]>0)
//         {
//             v[j++]=v[i];
//         }

//     }
//     while(j<n)
//     {
//         v[j]=0;
//         j++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }

// optimised code



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            count++;
        v.push_back(x);
    }
    int i = 0;
    int j = 0;
    while (j < n)
    {
        if (v[j] > 0)
        {
            swap(v[j], v[i]); 
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
}