/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
  if(head==NULL || head->next == NULL){
    return;
  }  
  //find the middle element
  struct ListNode*slow = head;
  struct ListNode*fast= head;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
//reverse the second half
struct ListNode *head1 = slow->next;
slow->next = NULL;
struct ListNode *prev= NULL;
while(head1 !=NULL){
  struct ListNode *next = head1->next;
  head1->next = prev;
  prev = head1;
  head1 = next;
}
//merge alternate nodes
struct ListNode*first = head;
struct ListNode *second = prev;
while(second != NULL){
struct ListNode *temp1 = first->next;
struct ListNode *temp2 = second->next;
first->next = second;
second->next = temp1;
first = temp1;
second = temp2;
    
}

}