class Solution {
  public:
  
    void solve(vector<vector<int>>& maze, int &n, string &t, 
                vector<string>&ans,int i,int j,vector<vector<int>> &visited){
                    
        if(i==n-1 && j==n-1){
            ans.push_back(t);
            return;
        }
        
        visited[i][j]=1;
        
        if(j+1<n && maze[i][j+1]==1 && visited[i][j+1]==0){
            t+='R';
            solve(maze,n,t,ans,i,j+1,visited);
            t.pop_back();
        }
        if(i+1<n && maze[i+1][j]==1 && visited[i+1][j]==0){
            t+='D';
            solve(maze,n,t,ans,i+1,j,visited);
            t.pop_back();
        }
        if(i-1>=0 && maze[i-1][j]==1 && visited[i-1][j]==0){
            t+='U';
            solve(maze,n,t,ans,i-1,j,visited);
            t.pop_back();
        }
        if(j-1>=0 && maze[i][j-1]==1 && visited[i][j-1]==0){
            t+='L';
            solve(maze,n,t,ans,i,j-1,visited);
            t.pop_back();
        }
        visited[i][j]=0;
        
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        
        
        int n = maze.size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        
        string t="";
        visited[0][0]=1;
        
        solve(maze,n,t,ans,0,0,visited);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

