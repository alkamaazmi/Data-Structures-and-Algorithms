/*
 * [1721] Swapping Nodes in a Linked List
 * Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).
 */

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode *first=head;
       for(int i=1;i<k;i++){
           first=first->next;
       } 
       ListNode *temp1=first,*temp2=head;
       while(temp1->next){
           temp1=temp1->next;
           temp2=temp2->next;
       }
       int d=temp2->val;
       temp2->val=first->val;
       first->val=d;
       return head; 
    }
};


// Time Complexity : O(N)
// Space Complexity : O(1)







