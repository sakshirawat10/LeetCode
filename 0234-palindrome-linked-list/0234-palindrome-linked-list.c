/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode*createNode(int val){
    struct ListNode*newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
 }
bool isPalindrome(struct ListNode* head) {
    struct ListNode*temp = head;
    struct ListNode*rev = NULL;
     while(temp!=NULL){
        struct ListNode* newNode = createNode(temp->val);
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