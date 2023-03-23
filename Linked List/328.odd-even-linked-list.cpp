/*
 * [328] Odd Even Linked List
 * Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
 */

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *odd = head, *even = head->next, *evenHead = head->next;
        while (even != NULL && even->next != NULL)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)
