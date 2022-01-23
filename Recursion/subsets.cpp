#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<vector<int>> ans= subsets(v);
    
   
}


// void subsets(vector<int>nums,vector<int>output,vector<vector<int>>&ans,int index)
// {
//     if(index>=nums.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     subsets(nums,output,ans,index+1);
//     int element=nums[index];
//     output.push_back(elements);

//     solve(nums,output,ans,index+1)
// }