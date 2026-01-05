class Solution {
public:
    // Searches for target in a sorted array and returns its index
    // Returns -1 if the target is not found
    int search(vector<int>& nums, int target) {

        int n = nums.size();     // size of the array
        int l = 0, r = n - 1;    // search boundaries

        // Perform binary search
        while (l <= r) {

            // Calculate mid safely to avoid overflow
            int mid = l + (r - l) / 2;

            // If target is greater, search right half
            if (nums[mid] < target)
                l = mid + 1;

            // If target is smaller, search left half
            else if (nums[mid] > target)
                r = mid - 1;

            // Target found
            else
                return mid;
        }

        // Target not found
        return -1;

        // Time Complexity: O(log n)
        // Space Complexity: O(1)
    }
};
