/*
* Delete without head pointer
* You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes.
* The task is to delete the node. Pointer/ reference to head node is not given. 
* No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.
*/

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       del->data=del->next->data;
       Node* temp=del->next;
       del->next=temp->next;
       delete temp;
    }

};

//Time Complexity:O(1)
// Space Complexity:O(1)