#include <bits/stdc++.h>
using namespace std;
/*int pow(int a, int b)

{
    static int ans = 1;
    if (b == 0)
    {
        return ans;
    }

    ans = ans * a;

    return pow(a, b - 1);
}*/

// Optimised code
int power(int a,int b)
{
  if(b==0)
  {
      return 1;
  }  
  if(b==1)
  {
      return a;
  }

  int ans=power(a,b/2);

  if(b%2==0)
  {
      return ans*ans;
  }
  else
  {
      return a*ans*ans;
  }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout<<ans;
}