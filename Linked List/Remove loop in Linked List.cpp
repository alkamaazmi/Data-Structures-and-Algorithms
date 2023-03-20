/*
 * Remove loop in Linked List
 */

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {   if(head==NULL)
          return;
          
         if(head->next==NULL){
             return;
         }
        Node* slow=head;
        Node* fast=head;
        int flag=0;
        Node* prev=NULL;
        while(fast&&fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return;
        }
        
        fast=head;
        
        while(fast!=slow){
            fast=fast->next;
            prev=slow;
            slow=slow->next;
        }
            prev->next=NULL;
    }
};

// Floyd’s Cycle-Finding Algorithm 
// Time Complexity : O(N)
// Space Complexity : O(1)
