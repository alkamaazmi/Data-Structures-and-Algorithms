/*
 * Leetcode [142] Linked List Cycle II
 * Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return NULL;
    
        ListNode *slow  = head;
        ListNode *fast  = head;
        ListNode *entry = head;

        while (fast&& fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {                     
                while(slow != entry) {              
                    slow  = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL; 
    }
};

// Time complexity : O(n)
// Space complexity : O(1)
