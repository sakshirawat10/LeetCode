/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
bool isPalindrome(struct ListNode* head) {
    struct ListNode*temp = head;
    struct ListNode*rev = NULL;
     while(temp!=NULL){
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
       newNode->val = temp->val;
        newNode->next = rev;
        rev = newNode;
        temp=temp->next;
     }   
     temp=head;
     while(temp != NULL && rev != NULL){
        if(temp->val!=rev->val){
            return false;
        }
        temp=temp->next;
        rev = rev->next;
     }
     return true; 
}