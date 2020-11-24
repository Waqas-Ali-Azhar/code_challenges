# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    lheight = 0
    rheight = 0
    balancedTree = 1;
    
    
    def getHeight(self,root,depth):
        temp = root
        while(temp):
            if(temp.left):
                depth = depth + 1
                temp = temp.left
                return self.getHeight(temp,depth)
            else:
                break
            if(temp.right):
                depth = depth + 1
                temp = temp.right
                return self.getHeight(temp,depth)
            else:
                break
                
        return depth        
                
    def pickNode(self,node,bTree):
        if bTree == 1:
            temp = node 
            if(temp.left):
                self.lheight = self.getHeight(temp.left,1)
            if(temp.right):
                self.rheight = self.getHeight(temp.right,1)
            
            
            print(self.lheight)
            print(self.rheight)
            

            if(self.lheight - self.rheight > 1 or (self.lheight - self.rheight < -1 and self.lheight - self.rheight !=0)):
                self.balancedTree = 0;
            else:
                self.lheight = 0
                self.rheight = 0
            
            if(self.balancedTree):
                while(temp):
                    if(temp.left and self.balancedTree):
                        return self.pickNode(temp.left,self.balancedTree)
                    if(temp.right and self.balancedTree):
                        return self.pickNode(temp.right,self.balancedTree)
                    break
                if(not self.balancedTree):
                    return False
                return True
        else:
            return False
        
        
    def isBalanced(self, root: TreeNode) -> bool:
        self.balancedTree = 1
        self.pickNode(root,self.balancedTree)
        