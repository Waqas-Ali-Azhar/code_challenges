# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    flag = 0;
    
    
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
            mylist = []
            if( not root.left and not root.right):
                return True
            if( not root.left or not root.right):
                return False
            if(root.left is not None and root.right is not None):
                self.checkSame(root.left, root.right)
                if not self.flag:
                    if root.left and root.right:
                        mylist.append(root.left)
                        mylist.append(root.right)
                        while(len(mylist)):
                            p = mylist.pop()
                            q = mylist.pop()
                        
                            if(p.val !=  q.val):
                                self.flag = 1
                                break
                        
                            if(p.left and q.right):
                                mylist.append(p.left)
                                mylist.append(q.right)
                            elif(p.left or q.right):
                                self.flag = 1
                                break
                            
                            if(p.right and q.left):
                                mylist.append(p.right)
                                mylist.append(q.left)
                            elif(p.right or q.left):
                                self.flag = 1
                                break
                    elif root.left or root.right:
                        self.flag =1 
                        
            if(self.flag == 1):
                return False
            return True