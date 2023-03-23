/*
 * [160] Intersection of Two Linked Lists
 * Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
 */

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
    }
    ListNode *temp = headA;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    int m = 0;
    temp = headB;
    while (temp)
    {
        m++;
        temp = temp->next;
    }
    int len = abs(n - m);
    if (n > m)
    {
        while (len)
        {
            headA = headA->next;
            len--;
        }
    }
    else
    {
        while (len)
        {
            headB = headB->next;
            len--;
        }
    }
    while (headA and headB)
    {
        if (headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
};
//Length Difference Solution
//Time Complexity : O(m + n)
//Space Complexity : O(1)