class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for (const auto& num: nums)
        {
            int temp = 1;
            int curr = num;
            if (!st.count(num - 1))
            {
                while (st.count(++curr))
                    temp++;
            }
            ans = max(ans, temp);
        }
        return ans;
    }
};
