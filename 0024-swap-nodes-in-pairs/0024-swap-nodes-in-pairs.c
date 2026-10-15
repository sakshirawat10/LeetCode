/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
   if(head == NULL || head->next == NULL){
    return head;
   } 
   struct ListNode* first = head;
   struct ListNode* second  = head->next;
   struct ListNode* prev = NULL;
   while(first != NULL && second != NULL){
    struct ListNode*third = second->next;
    second->next = first;
    first->next = third;
    if(prev == NULL){
        head = second;
    }
    else{
        prev->next = second;
    }
    prev = first;
    first = third;
    if(third != NULL){
        second = third->next;
    }
    else{
        second = third;
    }
   }
   return head;
}