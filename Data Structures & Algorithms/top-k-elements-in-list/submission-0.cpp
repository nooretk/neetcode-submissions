class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        unordered_map<int, int> temp1;
        for (int i = 0; i < nums.size(); i++) {
            temp1[nums[i]]++;
        }
        vector<pair<int, int>> temp2;
        for (auto& i: temp1) {
            temp2.push_back({i.second, i.first});
        }
        sort(temp2.begin(), temp2.end());
        int s = temp2.size();
        for (int i = 0; i < k; i++) {
            ans.push_back(temp2[s - i - 1].second);
        }


       
    return ans;
        
    }
    
};
