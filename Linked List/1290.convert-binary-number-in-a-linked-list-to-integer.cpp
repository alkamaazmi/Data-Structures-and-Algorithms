/*
 * [1290] Convert Binary Number in a Linked List to Integer
 * Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
 * Return the decimal value of the number in the linked list.
 * The most significant bit is at the head of the linked list.
 */

class Solution {
public:
    int getDecimalValue(ListNode* head) {
         int length=0;
        ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
        length--;
        int ans=0;
        temp=head;
        while(temp){
            ans+=temp->val*pow(2,length);
            length--;
            temp=temp->next;
        }
        return ans;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)
