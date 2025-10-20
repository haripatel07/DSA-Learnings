class Solution {
  public:
    vector<int>dp;
    void filldp(int n){
        dp.resize(n+1,0);
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<n+1;i++){
            int max_nodes=i-1;
            for(int j=0;j<=max_nodes;j++){
                dp[i]+=dp[j]*dp[max_nodes-j];
            }
        }
        
    }
    vector<int> countBSTs(vector<int>& arr) {
        int n=arr.size();
        filldp(n);
        
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            int big=0;
            int small=0;
            for(int j=0;j<n;j++){
                if(arr[j]>arr[i])big++;
                if(arr[j]<arr[i])small++;
            }
            int res=dp[big]*dp[small];
            ans.push_back(res);
        }
        
        return ans;
    }
};