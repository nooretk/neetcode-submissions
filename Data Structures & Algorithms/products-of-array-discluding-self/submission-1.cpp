class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int ans[nums.size()];
        int pre[nums.size()];
        int post[nums.size()];
        
        pre[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            pre[i] = nums[i] * pre[i - 1];
        }
        cout << "Pre: [";
        for (int i = 0; i < nums.size(); i++) {
            cout << pre[i] << ", ";
        }
        cout << "]\n";

        post[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i > -1; i--) {
            post[i] = nums[i] * post[i + 1];
        }

        cout << "Post: [";
        for (int i = 0; i < nums.size(); i++) {
            cout << post[i] << ", ";
        }
        cout << "]\n";

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                ans[i] = 1 * post[i + 1];
            }
            else if (i == nums.size() - 1) {
                 ans[i] = pre[i - 1] * 1;
            }
            else {
                 ans[i] = pre[i - 1] * post[i + 1];
            }
        }

        vector<int> res(ans, ans + nums.size());
        return res;
    }
};
