class Solution {
public:
    // Returns the number of subarrays whose sum equals k
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;  // prefix sum -> count of occurrences
        freq[0] = 1;                    // empty subarray prefix
        int prefix = 0;                 // running prefix sum
        int count = 0;                  

        for (int num : nums) {
            prefix += num;              // update prefix sum

            // If (prefix - k) exists, add its frequency to count
            if (freq.find(prefix - k) != freq.end()) {
                count += freq[prefix - k];
            }

            // Update frequency of current prefix sum
            freq[prefix]++;
        }

        return count;

        // Time Complexity: O(n)
        // Space Complexity: O(n)
    }
};
