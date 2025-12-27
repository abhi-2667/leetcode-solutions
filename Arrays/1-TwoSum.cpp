class Solution {
public:
    // Returns indices of the two numbers such that they add up to target
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int more = target - nums[i]; // required value

            // If required value exists, solution found
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }

            // Store current value with its index
            mpp[nums[i]] = i;
        }

        return {}; // no valid pair found

        // Time Complexity: O(n)
        // Space Complexity: O(n)
    }
};
