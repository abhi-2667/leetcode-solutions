class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Pointer i keeps track of the last unique element
        int i = 0;
        // Pointer j scans the array
        for (int j = 1; j < nums.size(); j++) {
            // If a new element is found (not a duplicate)
            if (nums[j] != nums[i]) {
                // Move i forward
                i++;
                // Place the new unique element at index i
                nums[i] = nums[j];
            }
        }
        // i + 1 is the count of unique elements
        return i + 1;
        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
