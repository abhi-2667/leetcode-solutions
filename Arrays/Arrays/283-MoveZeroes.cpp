class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j, n = nums.size();

        // Find first zero
        for (i = 0; i < n; i++) {
            if (nums[i] == 0) break;
        }

        // Move non-zero elements forward
        for (j = i + 1; j < n; j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
