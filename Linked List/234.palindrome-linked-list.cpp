/*
 * [234] Palindrome Linked List
 * Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
 */

class Solution
{
public:
    ListNode *getMid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head, *next = NULL;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
        {
            return true;
        }
        ListNode *mid = getMid(head);
        mid->next = reverse(mid->next);
        ListNode *head1 = head;
        ListNode *head2 = mid->next;
        while (head2 != NULL)
        {
            if (head1->val != head2->val)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        mid->next = reverse(mid->next);
        return true;
    }
};
// Time Complexity : O(N)
// Space Complexity : O(1)