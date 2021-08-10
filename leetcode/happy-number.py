#https://leetcode.com/problems/happy-number
class Solution:
    newList = []
    def isHappy(self, n: int) -> bool:
        if n == 1: 
            self.newList.clear()
            return True
        elif n > 1:
            if n not in self.newList:
                self.newList.append(n)
                numString = str(n)
                squareSum = 0;
                for x in numString:
                    squareSum += int(x) * int(x)
                return self.isHappy(squareSum)    
            else:
                return False
                
            
                
        
            
        
        
        