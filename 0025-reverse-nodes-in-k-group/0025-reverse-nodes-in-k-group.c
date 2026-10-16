/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
  //check wheather k nodes exist
  struct ListNode*temp = head;
  int count=0;
  while(count<k && temp!=NULL){
    temp = temp->next;
    count++;
  }
  if(count<k){
    return head;
  }
  //reverse the nodes
  struct ListNode*curr=head;
  count = 0;
  struct ListNode*prev = NULL;
  while(count<k && curr!=NULL){
    struct ListNode*prevNode = curr->next;
    curr->next=prev;
    prev=curr;
    curr=prevNode;
    count++;
  }  
  head->next = reverseKGroup(curr,k);
  return prev;
}