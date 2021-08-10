#https://leetcode.com/problems/count-primes/
class Solution:
    def countPrimes(self, n: int) -> int:  
        
        primes=[0,0]+[1]*(n-2)
        
        for i in range(2,int(n**0.5)+1):
            for j in range(2*i, n, i):
                primes[j]=0
            
        return sum(primes)