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
    ListNode *curr,*p1,*p2,*temp;
    if(l1==NULL || l2 == NULL){
        if(l2!= NULL){return l2;}
        if(l1!= NULL){return l1;}
    } 
    if( l1==NULL && l2==NULL ){
        return curr = NULL;
    }
        
    if(l1->val > l2->val){
        temp = l1;
        l1 = l2;
        l2 = temp;
    }
    p1 = l1;
    p2 = p1->next;    
    curr = l2;
        
        while(p2!=NULL && curr!=NULL){
            
            if(curr->val >= p1->val && curr->val < p2->val){
                
                p1->next = curr;
                p1 = curr;
                curr = curr->next;
                p1->next =p2;
                            
            }
            else if( curr->val < p1->val && curr->val < p2->val  ){
                p2 = p1;
                p1 = curr;
                curr = curr->next;
                p1->next = p1;
            }
            else{
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        if(curr!=NULL){
            if(p1->val <= curr->val){
                p1 -> next = curr;
            }    
        }
        
        
        
    
    
    return l1; 
    }
        
    
        
    
};