class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        // Sum of first n natural numbers: 0 + 1 + ... + n
        int total = n * (n + 1) / 2;

        // Sum of elements in the array
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        // Missing number = expected sum - actual sum
        return total - sum;

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
