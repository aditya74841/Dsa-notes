#include<bits/stdc++.h>
using namespace std;
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
}
int main()
{
    char name[10];
    cin>>name;
    
    reverse(name,6);
    cout<<name;
    // cout<<"Length of the name is "<<<<endl;
}