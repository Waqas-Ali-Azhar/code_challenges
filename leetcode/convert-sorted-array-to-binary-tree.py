#https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    head = ''
    
    def addNode(self,nums):
        
        if(len(nums) < 1):
            return
        temp = self.head
        center = len(nums)//2
        newNode = TreeNode(nums[center])
        if(temp):
            while (temp):
                if( newNode.val < temp.val):
                    if(temp.left is None): break
                    temp = temp.left   

                if(newNode.val >= temp.val):
                    if(temp.right is None): break
                    temp = temp.right
            
            if(newNode.val < temp.val):
                temp.left = newNode
            else: 
                temp.right = newNode
        else:
            self.head = newNode
            
        self.addNode(nums[0:center]) 
        self.addNode(nums[center+1:len(nums)])     
        
            
        
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        self.head = []
        if(len(nums) < 1): return None
        self.addNode(nums)
        return self.head        
        