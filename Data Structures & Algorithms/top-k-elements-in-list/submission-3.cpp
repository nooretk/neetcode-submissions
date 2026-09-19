class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num: nums) freq[num]++;
        vector<pair<int, int>> temp;
        for (const auto& pair: freq)
            temp.push_back({pair.second, pair.first});
        sort(temp.rbegin(), temp.rend());
        vector<int> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(temp[i].second);
        return ans;
    }
};
