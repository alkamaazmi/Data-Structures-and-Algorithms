/*
 * [237] Delete Node in a Linked List
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
       node->val=node->next->val;
        ListNode *temp=node->next;
        node->next=temp->next;
        delete temp; 
    }
};

//Time Complexity: O(1)
//Space Complexity: O(1)
