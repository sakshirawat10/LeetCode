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
ListNode* rotate(ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode*curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    ListNode*temp = curr->next;
    curr->next = NULL;
    temp->next = head;
    return temp;
}
    ListNode* rotateRight(ListNode* head, int k) {
      if(head == NULL || head->next == NULL||k==0){
        return head;
      }  
      int l = 0;
      ListNode*temp = head;
      while(temp!=NULL){
        l++;
        temp = temp->next;
      }
      k=k%l;
      if(k==0){
        return head;
      }
      ListNode* newhead = rotate(head);
      return rotateRight(newhead,k-1);
    }
};