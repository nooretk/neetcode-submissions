class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        int n_zeros = 0;
        int total = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) n_zeros++;
            if (nums[i] != 0)
                total *= nums[i];
        }
        if (n_zeros == 0) {
            for (int i = 0; i < nums.size(); i++) {
                ans.push_back(total / nums[i]);
            }
        }
        else if (n_zeros == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0)
                    ans.push_back(total);
                else
                    ans.push_back(0);
            }
        }
        else {
            for (int i = 0; i < nums.size(); i++) {
                ans.push_back(0);
            }
        }
        return ans;
    }
};
