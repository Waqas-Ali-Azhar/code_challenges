#https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    depth = 0
    returnList = [];
    def getDepth(self,root,depth):
        if(depth > (len(self.returnList) - 1)):
            self.returnList.append([]);
        
        self.returnList[depth].append(root.val) 
        if root.left: self.getDepth(root.left,depth+1)
        if root.right: self.getDepth(root.right,depth+1)
    
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        self.returnList = []
        if(not root): return []
        self.getDepth(root,0)
        self.returnList.reverse()
        return self.returnList
        
            
                