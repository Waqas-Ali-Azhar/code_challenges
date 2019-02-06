/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }
        if(!l1 && !l2)
            return NULL;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        ListNode* newList = new ListNode(0);
        ListNode* ptrNewList = newList;
        int carry =0;
        while(ptr1!= NULL || ptr2!= NULL){
            int value = 0;
            if(ptr1!=NULL && ptr2!=NULL){
                value = ptr1->val + ptr2->val + carry;
            }
            else if(ptr2 != NULL){
                value = ptr2->val + carry;
            }
            else if(ptr1!=NULL){
                value = ptr1->val + carry;
            }
            
            newList->val =  value % 10;
            carry = value / 10;
            
            
            if(ptr1!=NULL)
                ptr1 = ptr1->next;
            if(ptr2!=NULL)
                ptr2 = ptr2->next;
            if(ptr1!=NULL || ptr2!=NULL || carry>0){
                newList->next =new  ListNode(0);
                newList = newList->next;    
            }
            
        }
        
        if(carry>0){
            newList->val = carry;
        }
        
        return ptrNewList;
    }
};