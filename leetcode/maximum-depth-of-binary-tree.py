#https://leetcode.com/problems/maximum-depth-of-binary-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    depth = 0;
    def getDepth(self,root,depth):
        
        if not root.left and not root.right:
            self.depth = max(self.depth, depth)
            
        if root.left: self.getDepth(root.left,depth+1)
        if root.right: self.getDepth(root.right,depth+1)    
            
    def maxDepth(self, root: TreeNode) -> int:
        self.depth = 0
        if not root: return 0
        self.getDepth(root,1)
        return self.depth
        