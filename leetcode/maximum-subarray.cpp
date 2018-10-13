//https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()<1) return NULL;
        int sum = 0;
        int maxSum = nums[0];
        for(int i=0; i<nums.size(); ++i){
            sum += nums[i];
            if( sum > maxSum){
                maxSum = sum;
            }
            if(sum < 0){
                sum = 0;
            }
            
            
        }
        
        return maxSum;
    }
};