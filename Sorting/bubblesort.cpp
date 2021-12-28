// #include<bits/stdc++.h>
// using namespace std;
// void selectionsort(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//        for(int j=0;j<n-i;j++)
//        {
//           if(a[j]>a[j+1])
//           {
            
//               swap(a[j+1],a[j]);
//           }
//        }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     selectionsort(a,n);
// }

// optimised code of bubble sort
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        bool swapped=false;
       for(int j=0;j<n-i;j++)
       {
          if(a[j]>a[j+1])
          {
            
              swap(a[j+1],a[j]);
              count++;
              swapped=true;
          }
       }
       if(swapped==false)
       {
           break;
       }
    }
    for(int i=0;i<n;i++)
    {
        cout<< "Aswer is"<<a[i]<<" "<<count;
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