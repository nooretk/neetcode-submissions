class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        cout << "Sorted: ";
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ' ';
        }
        cout << '\n';
        int curr = 1, res = 1;
        for (int i = 1; i < nums.size(); i++) {
            cout << "nums[i]: " << nums[i] << " curr: " << curr << '\n';
            if (nums[i] - nums[i - 1] == 1) {
                curr++;
                res = max(res, curr);
            }
            else if (abs(nums[i] - nums[i - 1]) == 0) continue;
            else {
                curr = 1;
            }
            
        }
        return res;
    }
};
