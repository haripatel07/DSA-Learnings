class Solution {
public:
    double calculateGain(int pass, int total){
        return (double)(pass + 1) / (total + 1) - (double)pass / total;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, pair<int, int>>> max_heap;
        for(auto& singleClass : classes){
            max_heap.push({calculateGain(singleClass[0], singleClass[1]), {singleClass[0], singleClass[1]}});
        }
        while (extraStudents --){
            auto [gain, singleClass] = max_heap.top();
            max_heap.pop();
            int pass = singleClass.first;
            int currClass = singleClass.second;
            max_heap.push({calculateGain(pass + 1, currClass + 1), {pass + 1, currClass + 1}});
        }
        double total_pass = 0;
        while (!max_heap.empty()){
            auto [_, singleClass] = max_heap.top();
            max_heap.pop();
            total_pass += (double)singleClass.first / singleClass.second;
        }
        return total_pass / classes.size();
    }
};