/*
 * GFG: Insert in a Sorted List
 */

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node *node=new Node(data);
        if(head==NULL or node->data<=head->data){
            node->next=head;
            head=node;
            return node;
        }
        Node *curr=head;
        while(curr->next!=NULL and curr->next->data<data){
            curr=curr->next;
        }
        node->next=curr->next;
        curr->next=node;
        return head;
        
    }
};