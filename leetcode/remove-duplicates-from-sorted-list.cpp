/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if( head == NULL ) return NULL;
        ListNode* ptr = head;
        while(ptr->next!=NULL){
            ListNode* temp = ptr->next;
            if(ptr->val == temp->val){
                while(temp->val == ptr->val){
                    if(temp->next!=NULL)
                       temp = temp->next;
                    else{
                        ptr->next = NULL;
                        return head;
                    }
                }
                ptr->next = temp;
                ptr = temp;
                continue;
            }
            ptr = ptr->next;
        }
      return head;
    }
};