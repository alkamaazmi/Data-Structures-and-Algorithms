/*
 * [92] Reverse Linked List II
 * Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
 */

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *left0=NULL,*curr=head;
        int length=right-left+1;
        while(left>1){
            left0=curr;
            curr=curr->next;
            left--;
        }
        ListNode *prev=NULL,*tail=curr,*next=NULL;
        while(length>0){
             next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
             length--;
        }
        if(left0==NULL){
            head=prev;
        }else{
            left0->next=prev;
        }
        tail->next=curr;
        return head;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)
