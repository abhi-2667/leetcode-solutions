class Solution {
public:
    // Returns the maximum sum of a contiguous subarray
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0]; // max subarray sum ending at previous index
        int sum = nums[0];  // global maximum subarray sum

        for (int i = 1; i < n; i++) {
            // Either start new subarray at nums[i] or extend previous subarray
            prev = max(nums[i], prev + nums[i]);

            // Update global maximum sum
            sum = max(sum, prev);
        }

        return sum;

        // Time Complexity: O(n) - traverse array once
        // Space Complexity: O(1) - only constant extra space
    }
};
