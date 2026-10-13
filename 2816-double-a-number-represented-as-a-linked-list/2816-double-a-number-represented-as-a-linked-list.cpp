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
ListNode*reverse(ListNode*head){
    if(head == NULL ){
        return head;
    }
    ListNode*curr=head;
    ListNode*prev=NULL;
    while(curr != NULL){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
    ListNode* doubleIt(ListNode* head) {
        if(head == NULL){
            return head;
        }
      int carry = 0;
      int sum = 0;
      ListNode*newhead = reverse(head);
      ListNode*curr = newhead;
      while(curr !=NULL){
      sum = curr->val*2+carry;
      curr->val = sum%10;
      carry = sum/10;
      curr = curr->next;
      }
      if(carry>0){
        ListNode*newNode = new ListNode(carry);
      ListNode*temp = newhead;
      while(temp->next != NULL){
       temp = temp->next;
      }
      temp->next = newNode;
      }
      ListNode*t= reverse(newhead);
      return t; 
    }
};