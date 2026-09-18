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
    bool isPalindrome(ListNode* head) {
     ListNode*temp = head;
     ListNode*rev = NULL;
     while(temp!=NULL){
        ListNode* newNode = new ListNode(temp->val);
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
};