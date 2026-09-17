class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (myMap.find(nums[i]) != myMap.end())
            {
                vector<int> ans = {myMap[nums[i]], i};
                return ans;
            }
            myMap[target - nums[i]] = i;
            
        }
    }
};
