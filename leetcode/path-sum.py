# https://leetcode.com/problems/path-sum/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    value = 0
    flag = False
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if not root:
            return False
        
        
        self.sumValues(root,self.value, sum)  
        return self.flag
        
    def sumValues(self, node, val,sum) -> bool:   
        if node.left:
            self.sumValues(node.left, val +  node.val, sum)
        if node.right:
            self.sumValues(node.right, val + node.val, sum)
    
        if not node.right and not node.left:
            if sum == node.val + val:
                self.flag = True
                return
            return False
        