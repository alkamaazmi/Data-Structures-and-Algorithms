/*
 * [2095] Delete the Middle Node of a Linked List
 * You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
 */

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = head; // keeping this prev node to get the previous node of slow pointer when we reach middle
        while (fast != NULL && fast->next != NULL)
        {
            prev = slow; // since we want prev to start one step later than slow node
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
        return head;
    }
};
// Time Complexity : O(N)
// Space Complexity : O(1)
