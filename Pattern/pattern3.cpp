/* 
A B C 
B C D
C D E


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch='A'+i-1;
        for(int j=1;j<=n;j++)
        {
         cout<<ch;
         ch++;
        }
        cout<<endl;
    }
}
*/


/*
* * * * 
* * *
* * 
*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      for(int j=0;j<n;j++)
      {
          if(j<=n-i)
          {
              cout<<"*"<<" ";
          }

      }
      cout<<endl;
    }
}
*/

/*
1 1 1 1
  2 2 2
    3 3
      4


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
           if(j>=i)
           {
               cout<<" "<<" ";
           }
           else
           {
               cout<<i<<" ";
           }
        }
        cout<<endl;
    }
}

*/






/*
      1 
    2 2 
  3 3 3 
4 4 4 4 


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
           if(j<=n-i)
           {
               cout<<" "<<" ";
           }
           else
           {
               cout<<i<<" ";
           }
        }
        cout<<endl;
    }
}
*/



