// 2 Approach in this file
// Second approach started at line no 100; 


// Approach 1


/*class Solution{
    private:
    bool issafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> m)
    {
        if((x>=0&&x<n)&&(y>=0&&y<n)&&visited[x][y]==0&&m[x][y]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> m,vector<string>&ans,int x,int y,int n,
    string path,vector<vector<int>>visited)
    {
      if(x==n-1&&y==n-1)
      {
          ans.push_back(path);
          return;
      }
      
       visited[x][y]=1;
       
       
       //down
      int newx=x+1;
      int newy=y;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('D');
          solve(m,ans,newx,newy,n,path,visited);
          path.pop_back();
      }
      
       //up
       newx=x-1;
       newy=y;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('U');
          solve(m,ans,newx,newy,n,path,visited);
          path.pop_back();
      }
      
      //left
       newx=x;
       newy=y-1;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('L');
          solve(m,ans,newx,newy,n,path,visited);
          path.pop_back();
      }
      //right
       newx=x;
      newy=y+1;
      if(issafe(newx,newy,n,visited,m)){
          path.push_back('R');
          solve(m,ans,newx,newy,n,path,visited);
          path.pop_back();
      }
      
      
      
      visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        
        if(m[0][0]==0)
        {
            return ans;
        }
        
        int srcx=0;
        int srcy=0;
        
        vector<vector<int>>visited=m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                visited[i][j]=0;
            }
        }
        string path="";
        solve(m,ans,srcx,srcy,n,path,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
*/

// Approach 2


/*class Solution{
    public:
    void solve(vector<vector<int>> &m,vector<string> &ans,int i,int j,int n,string &str) {
        if(i==n-1 && j==n-1) {
            ans.push_back(str);
            return;
        }
        m[i][j] = 0;
        if(i+1<n && m[i+1][j]==1) {
            str.push_back('D');
            solve(m,ans,i+1,j,n,str);
            str.pop_back();
        }
        if(i-1>=0 && m[i-1][j]==1) {
            str.push_back('U');
            solve(m,ans,i-1,j,n,str);
            str.pop_back();
        }
        if(j+1<n && m[i][j+1]==1) {
            str.push_back('R');
            solve(m,ans,i,j+1,n,str);
            str.pop_back();
        }
        if(j-1>=0 && m[i][j-1]==1) {
            str.push_back('L');
            solve(m,ans,i,j-1,n,str);
            str.pop_back();
        }
        m[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0) {
            return ans;
        }
        string str;
        solve(m,ans,0,0,n,str);
        sort(ans.begin(),ans.end());
        return ans;
    }
};/*