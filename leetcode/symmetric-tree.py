# Definition for a binary tree node.
#https://leetcode.com/problems/symmetric-tree/
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    flag = 0;
    pRoots = []
    qRoots = []
    
    def checkSame(self, p: TreeNode, q: TreeNode):
            if(p.left is not None and q.right is not None):
                return self.checkSame(p.left, q.right)
            if(p.left is None):
                self.flag = 1
            if(q.right is None):
                self.flag = 1
            if(p.left is None and p.right is None):
                self.flag = 0
            elif(p.right is None or q.left is None):
                self.flag =1
            if(p.val != q.val):
                self.flag = 1
            
            if(p.right is not None and q.left is not None):
                return self.checkSame(p.right , q.left)
            if(p.right is None):
                self.flag = 1
            if(p.left is None):
                self.flag = 1
            if(p.right is None and p.left is None):
                self.flag = 0
            elif(p.right is None or q.left is None):
                self.flag =1
                
    
    def isSymmetric(self, root: TreeNode) -> bool:
        if(root is None):
            return True
        else:
            if(root.left is not None and root.right is not None):
                return self.checkSame(root.left, root.right)
#             self.pRoots.append(root.left)
#             self.qRoots.append(root.right)
            
#             for x,temp in enumerate(self.pRoots):
#                 if(self.flag == 1):
#                     break
#                 p = self.pRoots[x]
#                 q = self.qRoots[x]
                
                
#                 while(self.flag == 0):
#                     if(p.right is not None and q.left is not None ):
#                             self.pRoots.append(p.right)
#                             self.qRoots.append(q.right)
#                     if(p.right is None):
#                         self.flag = 1
#                     if(q.left is None):
#                         self.flag = 1
#                     if(p.right is None and q.left is None):        
#                         self.flag = 0
#                     elif(self.flag == 1):
#                         break        
                
                    
#                     if(p.val != q.val):
#                         self.flag = 1
#                         break

                
                
            

            if(self.flag == 1):
                return False
            return True