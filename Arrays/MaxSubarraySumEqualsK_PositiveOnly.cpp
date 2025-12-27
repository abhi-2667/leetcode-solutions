class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;     // maximum subarray length
        int left = 0, right = 0; // window pointers
        int sum = 0;        // sum of elements in current window

        while (right < n) {
            sum += nums[right]; // add current element to window

            // Shrink window from left if sum exceeds k
            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }

            // Update maximum length if sum equals k
            if (sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
