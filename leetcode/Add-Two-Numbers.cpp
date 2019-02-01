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
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* next;
        int sum;
        
        
        while(p1->next!=NULL && p2->next!=NULL){
            next = p1->next;
            sum = p1->val + p2->val;
            if(sum<10){
               p1->val = sum;
               p1 = next;
               next = next->next;
               p2 = p2->next; 
            }
            else if(sum>=10){
                
                next->val = (next->val + sum/10); 
                p1->val = sum%10;
                p1 = next;
                next = next->next;
                p2 = p2->next; 
                
            }

         sum = p1->val+p2->val;
         
        
        }
        
    if(sum>10){
            ListNode* ptr= p1;
            
            if(p2->next!=NULL){
              p2->next->val = sum/10;
              p1->val = sum % 10;
            }
            else{
                ptr->val =  sum /10;  
                p1->val = sum % 10;
                ptr->next = p1->next;
                p1->next = ptr;  
            }
            
            
        }
        
        
        return l1;
    }
};
