class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set store(nums.begin(), nums.end());
        int curr = 0, res = 0, streak = 0;
        
        for (int num: nums) {
            if (store.find(num - 1) == store.end()) {
                curr = num;
                while (store.find(curr) != store.end()) {
                    cout << res << ' ';
                    streak++;
                    curr++;
                    res = max(res, streak);
                }
                streak = 0;
            } else {
                streak = 0;
            }
        }
        return res;
    }
};
