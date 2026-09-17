class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int res = 0, curr = 0;

        while (i < heights.size()) {
            j = heights.size() - 1;
            while (j > i) {
                curr = (j - i) * min(heights[i], heights[j]);
                res = max(res, curr);
                j--;
            }
            i++;
        }
        return res;
    }
};
