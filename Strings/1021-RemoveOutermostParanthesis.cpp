class Solution {
public:
    // Removes the outermost parentheses of every primitive substring
    string removeOuterParentheses(string s) {

        string ans = "";   // stores the final result
        int cnt = 0;       // tracks current depth of parentheses

        for (char c : s) {

            // Opening parenthesis
            if (c == '(') {
                if (cnt > 0) 
                    ans.push_back(c);  // skip outermost '('
                cnt++;
            }

            // Closing parenthesis
            else {
                cnt--;
                if (cnt > 0) 
                    ans.push_back(c);  // skip outermost ')'
            }
        }

        return ans;

        // Time Complexity: O(n)
        // Space Complexity: O(n)
    }
};
