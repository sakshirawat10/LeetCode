/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode*reverse(struct ListNode*head){
    if(head == NULL){
        return head;
    }
    struct ListNode*curr = head;
    struct ListNode*prev = NULL;
    while(curr!=NULL){
        struct ListNode*temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
 }
struct ListNode* doubleIt(struct ListNode* head) {
 if(head == NULL){
    return head;
 }   
 
 int carry = 0;
 head = reverse(head);
 struct ListNode*curr = head;
 while(curr !=NULL){
    int sum = curr->val*2+carry;
    curr->val = sum%10;
    carry = sum/10;
     if(curr->next == NULL){
     break;
    }
    curr=curr->next;
 } 
 if(carry>0){
    struct ListNode*newNode = malloc(sizeof(struct ListNode));
    newNode->val = carry;
    newNode->next = NULL;
    curr->next = newNode;
 }
 return reverse(head);
}