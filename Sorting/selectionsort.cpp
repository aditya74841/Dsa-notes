#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
       for(int j=i+1;j<n;j++)
       {
          if(a[j]<a[minIndex])
          {
            //   minIndex=j;
              swap(a[j],a[i]);
          }
       }
    //    swap(a[minIndex],a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Answer is"<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    selectionsort(a,n);
}