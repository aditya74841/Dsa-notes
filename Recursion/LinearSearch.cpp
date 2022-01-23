#include <bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[], int n,int k)
{
   if(n==0)
   {
       return false;
   }
   if(arr[0]==k)
   {
       return true;
   }
   else
   {
       return LinearSearch(arr+1,n-1,k);
   }
}
int main()
{
    int n,k;
    cin >> n>>k;
    int arr[10];
    // int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans=LinearSearch(arr,n,k);
    if(ans)
    {
        cout<<"Number found"<<endl;
    }
    else
    {
        cout<<"Number not found"<<endl;
    }

  
}