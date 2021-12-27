#include <bits/stdc++.h>
using namespace std;
int main()
{
    //     int a, b;
    //     a = 5;
    //     b = 6;

    //     cout << "a & b" << (a & b) << endl;
    //     cout << "a | b" << (a | b) << endl;
    //     cout << "  ~a " << ~a << endl;
    //     cout << "a ^ b" << (a ^ b) << endl;

    //     cout<<(17>>2)<<endl;
    //     cout<<(17>>1)<<endl;
    //     cout<<(19<<1)<<endl;
    //     cout<<(19<<2)<<endl;

    for (int i = 0; i < 15  ; i+=2)
    {
        cout << i << " ";

        if(i&1)
        {
            continue;
        }
        i++;
    }
}