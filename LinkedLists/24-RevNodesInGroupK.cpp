class Solution {
public:
    // Reverses nodes of the linked list in groups of size k
    ListNode* reverseKGroup(ListNode* head, int k) {

        // Step 1: Count number of nodes in the list
        ListNode* temp = head;
        int cnt = 0;
        while (temp) {
            temp = temp->next;
            cnt++;
        }

        // If fewer than k nodes, do not reverse
        if (cnt < k) return head;

        // Step 2: Reverse first k nodes
        temp = head;
        cnt = 0;
        ListNode* prev = nullptr;   // previous node for reversal
        ListNode* top = nullptr;    // stores next node temporarily

        while (temp && cnt < k) {
            top = temp->next;       // save next node
            temp->next = prev;      // reverse current link
            prev = temp;            // move prev forward
            temp = top;             // move temp forward
            cnt++;
        }

        // Step 3: Recursively reverse remaining nodes
        head->next = reverseKGroup(top, k);

        // Step 4: Return new head of reversed group
        return prev;

        // Time Complexity: O(n) (O(n²) worst-case due to repeated counting)
        // Space Complexity: O(1) auxiliary (recursion stack excluded)
    }
};
