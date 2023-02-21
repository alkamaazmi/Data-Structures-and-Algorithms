/*
 * [876] Middle of the Linked List
 * Given the head of a singly linked list, return the middle node of the linked list.
 * If there are two middle nodes, return the second middle node.
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        count=count/2+1;
        curr=head;
        while(count>1){
           curr=curr->next;
           count--;
        }
        return curr;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *s=head;
        ListNode *f=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

