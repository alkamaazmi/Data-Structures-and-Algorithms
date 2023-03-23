/*
 * [203] Remove Linked List Elements
 * Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        while(head!=NULL and head->val==val){
            head=head->next;
        }
        ListNode *curr=head;
        while(curr!=NULL and curr->next!=NULL){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};


// Time Complexity : O(N)
// Space Complexity : O(1)


