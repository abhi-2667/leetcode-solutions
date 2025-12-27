class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int cnt = 0;   // current consecutive 1's
        int maxi = 0;  // maximum consecutive 1's

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                cnt++;     // increment count for 1
            else
                cnt = 0;   // reset count for 0

            maxi = max(maxi, cnt);  // update maximum
        }

        return maxi;

        // Time Complexity: O(n)
        // Space Complexity: O(1)
    }
};
