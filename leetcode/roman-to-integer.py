#https://leetcode.com/problems/roman-to-integer/
class Solution:
    def romanToInt(self, s: str) -> int:
        
        
        newStack = []
        basicDict ={"M":1000,"D":500,"C":100,"L":50,"X":10,"V":5,"I":1,"CD":400,"CM":900,"XC":90,"XL":40,"IV":4,"IX":9}
        for i,x in enumerate(s):
            if(i>0):
                if(x in ["M","D","C","L","X","V"]):
                    lastItem = newStack[-1]
                    if(lastItem in ["C","X","I"]):
                        if((lastItem+x) in basicDict.keys()):
                            lastItem = newStack.pop()
                            newStack.append(lastItem+x)
                            continue
                
                        
                    
                
            newStack.append(x)
        
        ans = 0
        print(newStack)
        for x in newStack:
            print(basicDict[x])
            ans += basicDict[x]
        
        return ans    