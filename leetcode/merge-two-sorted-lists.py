#https://leetcode.com/problems/merge-two-sorted-lists/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
            
            if l1 and not l2:
                return l1
            if l2 and not l1:
                return l2
            
            if not l1 and not l2:
                return l1
            
            if l1.val <= l2.val:
                low = l1
                value = l2
                high = l1.next
                
            else:
                low = l2
                value = l1
                high = l2.next
            
            head = low    
            
            while high and value:
                
                if value.val >= low.val and value.val <= high.val:
                        low.next = value
                        low = value
                        value = value.next
                        low.next = high
                elif value.val > low.val and value.val > high.val:
                    
                        low.next = high
                        low = high
                        high = high.next
                    
                    
            if(value):
                low.next = value
            
            return head
            
                    
                    
            
                
                
            
            