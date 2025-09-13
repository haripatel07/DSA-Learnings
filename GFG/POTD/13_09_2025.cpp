class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        sort(x.begin(), x.end(), greater<int>());
        sort(y.begin(), y.end(), greater<int>());
        
        int i = 0, j = 0;
        long long cost = 0;
        int horizontalPieces = 1, verticalPieces = 1;
        
        while (i < m - 1 && j < n - 1) {
            if (x[i] > y[j]) {
                cost += 1LL * x[i] * horizontalPieces;
                verticalPieces++;
                i++;
            } else {
                cost += 1LL * y[j] * verticalPieces;
                horizontalPieces++;
                j++;
            }
        }
        
        while (i < m - 1) {
            cost += 1LL * x[i] * horizontalPieces;
            verticalPieces++;
            i++;
        }
        
        while (j < n - 1) {
            cost += 1LL * y[j] * verticalPieces;
            horizontalPieces++;
            j++;
        }
        return (int)cost;
    }
};
