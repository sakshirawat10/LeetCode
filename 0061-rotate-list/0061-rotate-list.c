/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode*rotate(struct ListNode*head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode*temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    struct ListNode*curr = temp->next;
    temp->next = NULL;
    curr->next = head;

    return curr;
 }
struct ListNode* rotateRight(struct ListNode* head, int k) {
  int l = 0;
  if(head == NULL || head->next == NULL || k == 0){
    return head;
  }  
  struct ListNode* temp = head;
  while(temp != NULL){
    l++;
    temp = temp->next;
  }
  k = k%l;
  if(k == 0){
    return head;
  }
  struct ListNode* newHead = rotate(head);
  return rotateRight(newHead,k-1);
}