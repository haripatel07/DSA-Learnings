class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        int n = (int)arr.size();
        int idx = -1;
        int ans = -1;
        int i=0;
        int j=0;
        deque<int>maxD;
        deque<int>minD;
        while(j<n)
        {
            while(!maxD.empty() && arr[j]>arr[maxD.back()])
            maxD.pop_back();
            
            while(!minD.empty() && arr[j]<arr[minD.back()])
            minD.pop_back();
            
            maxD.push_back(j);
            minD.push_back(j);
            int diff = arr[maxD.front()] - arr[minD.front()];
            
            while(i<=j && diff>x)
            {
                
                if(i==maxD.front())
                maxD.pop_front();
                if(i==minD.front())
                minD.pop_front();
                i++;
                diff = arr[maxD.front()] - arr[minD.front()];
            }
            
            int len = j-i+1;
            if(len>ans)
            {
                ans=len;
                idx=i;
            }
            j++;
        }
        
        vector<int>v;
        for(int i=idx;i<(idx+ans);i++)
        {
            v.push_back(arr[i]);
        }
        return v;
    }
};