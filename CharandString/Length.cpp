#include<bits/stdc++.h>
using namespace std;
int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[10];
    cin>>name;
    cout<<"Length of the name is "<<getLength(name)<<endl;
}