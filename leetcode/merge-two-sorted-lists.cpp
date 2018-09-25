/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // https://leetcode.com/problems/merge-two-sorted-lists/description/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1==NULL or l2 == NULL){
        if(l2->val!= NULL){return l1;}
        if(l1->val!= NULL){return l2;}
    }else if( l1==NULL && l2==NULL ){
        // return ListNode* if both are null ?
    }
        
    ListNode *prev,*p1,*p2,*temp;
    if(l1->val > l2->val){
        temp = l1;
        l1 = l2;
        l2 = temp;
    }
    prev = l1;
    p1 = l1->next;
    p2 = l2;
        
    
    while(p1->val!= NULL &&  p2->val!=NULL ){
        
        if(p2->val == p1->val){
            prev->next = p2;
            prev = p2;
            p2 = p2->next;
        }
        else if(prev->val < p2->val && p2->val > p1->val){
            prev->next = p1;
            prev = p1;
            if(p1->next!=NULL){
                p1 = p1->next;    
            }
            else{
                if(p2->val > prev->val){
                    prev->next = p2;
                }
                 break;
            }
            
        }
        else if( prev->val < p2->val && p2->val < p1->val){
            prev->next = p2;
            prev = p2;
            if(p2->next!=NULL)
            {p2 = p2->next;}
            else{
                if(p1->val > prev->val){
                    prev->next = p1;
                }
                 break;
            }
            
        }

    }
        
    
    return l1; 
    }
        
    
        
    
};