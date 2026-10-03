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
ListNode* Reverse(ListNode*head){
 if(head==NULL||head->next ==NULL){
    return head;
 }
 ListNode*curr = head;
 while(curr->next->next!=NULL){
    curr =curr->next;
 }
 ListNode*temp = curr->next;
 curr->next=NULL;
 temp->next=head;
 return temp;
}
    ListNode* rotateRight(ListNode* head, int k) {
     int length = 0;
     if(head==NULL||head->next==NULL||k==0){
        return head;
     }
     ListNode*temp=head;
     while(temp!=NULL){
        length++;
        temp = temp->next;
     }
     k=k%length;
     if(k==0){
        return head;
     }
     ListNode*Newhead = Reverse(head);
     return rotateRight(Newhead,k-1);
        
    }
};