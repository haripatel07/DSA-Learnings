class Solution {
  public:
    int minOperations(vector<int>& arr) {
        // code here
        double tSum = 0.0;
        priority_queue<double> mxHeap;
        for (int i=0; i<arr.size(); i++) {
            tSum += arr[i];
            mxHeap.push(1.0*arr[i]);
        }
        
        double hSum = 1.0*tSum/2;
        
        int ans = 0;
        while (tSum>hSum) {
            double tp = mxHeap.top();
            mxHeap.pop();
            tp = tp/2.0;
            tSum -= tp;
            mxHeap.push(tp);
            ans++;
        }
        return ans;
    }
};