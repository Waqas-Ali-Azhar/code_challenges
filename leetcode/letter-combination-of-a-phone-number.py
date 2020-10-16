#https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution:
    ans = []
    def letterCombinations(self, digits: str) -> List[str]:
        ans = []
        if not digits:
            return []
        temp = ''
        mapping = {
            '2':'abc',
            '3':'def',
            '4':'ghi',
            '5':'jkl',
            '6':'mno',
            '7':'pqrs',
            '8':'tuv',
            '9':'wxyz'
        }
        self.backtrack(mapping,digits,temp,ans)
        return ans
        
    def backtrack(self,mapping,digits,temp,ans):
        if(len(digits) == 0):
            ans.append(temp)
            return
        else:
            if(digits[0] in mapping):
                for j in mapping[digits[0]]:
                    self.backtrack(mapping,digits[1:],temp+j,ans)

            
                