/*
 * [83] Remove Duplicates from Sorted List
 * Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
 */

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *curr = head;
        while (curr != NULL and curr->next != NULL)
        {
            if (curr->next->val == curr->val)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};
// Time Complexity : O(N)
// Space Complexity : O(1)
