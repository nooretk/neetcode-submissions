class Solution {
public:
    int findMin(vector<int> &nums) {
        int start = 0, end = nums.size() - 1;
        int mid = start + ((end - start) / 2);

        while (start < end)
        {
            mid = start + ((end - start) / 2);
            if (mid > 0 && nums[mid - 1] > nums[mid]) return nums[mid];
            if (nums[mid] < nums[end])
                end = mid - 1; // left
            else
                start = mid + 1;
        }
        cout << 'g';
        return nums[start];
    }
};
