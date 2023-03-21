/*
 * Leetcode [19] Remove Nth Node From End of List
 * Given the head of a linked list, remove the nth node from the end of the list and return its head.
 * The number of nodes in the list is sz.
 * 1 <= sz <= 30
 * 0 <= Node.val <= 100
 * 1 <= n <= sz
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for (int i = 1; i<=n; i++) {
          fast = fast->next;
        }
        if (!fast){
            return head->next;
        } 
        while (fast->next){
            fast = fast->next;
            slow = slow->next;
        } 
        slow->next = slow->next->next;
        return head;
    }
};

// Time complexity:O(n)
// Space complexity:O(1) 

