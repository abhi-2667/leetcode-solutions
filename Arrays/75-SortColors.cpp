class Solution {
public:
    // Sorts the array containing only 0s, 1s, and 2s
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, r = nums.size() - 1;
        // l -> boundary for 0s
        // m -> current element
        // r -> boundary for 2s

        while (m <= r) {
            if (nums[m] == 0) {
                // Place 0 at the left
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1) {
                // 1 is already in correct position
                m++;
            }
            else {
                // Place 2 at the right
                swap(nums[m], nums[r]);
                r--;
            }
        }

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
