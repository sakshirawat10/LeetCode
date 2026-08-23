/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL || list2 == NULL){
        return list1 == NULL ? list2 : list1;
        }
        // case1
        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next,list2);
            return list1;
        }  
        else{
            list2->next = mergeTwoLists(list1,list2->next);
            return list2;
            
        }
    }
