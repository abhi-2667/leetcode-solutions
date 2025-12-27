class Solution {
public:
    // Returns the length of the longest subarray with sum equal to k
    int maxSubArrayLen(vector<int>& nums, int k) {
        int sum = 0;           // running sum
        int maxLen = 0;        // maximum subarray length
        map<int, int> preSum;  // prefix sum -> first occurrence index

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i]; // update running sum

            // Case 1: sum from index 0 to i equals k
            if (sum == k) maxLen = max(maxLen, i + 1);

            // Case 2: check if (sum - k) exists
            int rem = sum - k;
            if (preSum.find(rem) != preSum.end()) {
                int len = i - preSum[rem];   // subarray length
                maxLen = max(maxLen, len);
            }

            // Store first occurrence of this running sum
            if (preSum.find(sum) == preSum.end()) {
                preSum[sum] = i;
            }
        }

        return maxLen;

        // Time Complexity: O(n log n) – due to map operations
        // Space Complexity: O(n)
    }
};
