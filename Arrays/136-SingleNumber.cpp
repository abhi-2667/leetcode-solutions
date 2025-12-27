class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;  // will hold the single number

        // XOR all numbers in the array
        // Duplicate numbers cancel out because x ^ x = 0
        for (int n : nums) {
            res ^= n;
        }

        // Result is the number that appears only once
        return res;

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
