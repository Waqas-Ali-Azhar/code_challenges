#https://leetcode.com/problems/minimum-depth-of-binary-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    depth = 0
    
    def minDepth(self, root: TreeNode) -> int:
            if not root:
                return 0
            return self.dfs(root,1)  
    
    def dfs(self,node,level) -> int:   
            
            if node.left:
                  self.dfs(node.left, level+1)
            if node.right:
                  self.dfs(node.right, level+1)

            if not node.left and not node.right:
                if self.depth == 0:
                    self.depth = level
                else:
                    self.depth = min(self.depth,level)
                    if(self.depth==4):
                        print(node)
            
                
                
            return self.depth