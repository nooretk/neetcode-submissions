class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        priority_queue<pair<int, int>> minHeap;
        for (auto& i: count) {
            minHeap.push({i.second, i.first});
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

       
    return ans;
        
    }
    
};
