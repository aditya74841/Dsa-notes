// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int k;
//     cin>>k;
//     int l=0;
//     int r=n-1;
//     int mid=(l+r)/2;
//     while(l<=r)
//     {
//         if(a[mid]==k)
//         {
//             cout<<"number found"<<a[mid];
//             return 0;
//         }
//         else if(k<a[mid])
//         {
//             r=mid-1;
//         }
//         else
//         {
//             l=mid+1;
//         }

//     }
//     cout<<"number not found"<<endl;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 10;
    int *p;
    p = &i;
    cout << p-- << endl;

    // p--;
    // cout << p << endl;
}