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
void reorderList(ListNode* head) {
  if(head==NULL || head->next == NULL){
    return;
  }  
  //find the middle element
   ListNode*slow = head;
   ListNode*fast= head;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
//reverse the second half
 ListNode *head1 = slow->next;
slow->next = NULL;
 ListNode *prev= NULL;
while(head1 !=NULL){
   ListNode *next = head1->next;
  head1->next = prev;
  prev = head1;
  head1 = next;
}
//merge alternate nodes
 ListNode*first = head;
 ListNode *second = prev;
while(second != NULL){
 ListNode *temp1 = first->next;
 ListNode *temp2 = second->next;
first->next = second;
second->next = temp1;
first = temp1;
second = temp2;
    
}   
 }
};