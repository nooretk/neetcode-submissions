class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> freq(n + 1);
        unordered_map<int, int> mp;
        for (int num: nums) mp[num]++;
        for (const auto& pair: mp)
            freq[pair.second].push_back(pair.first);
        
        vector<int> ans;
        for (int i = freq.size() - 1; i > 0; i--)
        {
            for (int num: freq[i])
            {
                if (ans.size() < k)
                    ans.push_back(num);
                else return ans;
            }

        }
        return ans;
    }
};
