#https://leetcode.com/problems/majority-element/submissions/
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        diction = defaultdict(int)
        for x in nums:
                diction[x] += 1
                
        for key,val in diction.items():
            if val > len(nums)/2:
                return key
            