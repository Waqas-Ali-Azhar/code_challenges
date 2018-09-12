/**
 * @param {number[]} nums
 * @return {number}
 */

 // https://leetcode.com/problems/single-element-in-a-sorted-array/description/
 
var singleNonDuplicate = function(nums) {

    var last = nums.length-1;
    for(x=0;x<Math.ceil(nums.length/2);x=x+2){
        if(nums[x]!=nums[x+1]){
            if(nums[x+1]==nums[x+2]){
                return nums[x];
            }
            else{
                return nums[x+1];
            }
        }
        
        if(nums[last]!=nums[last-1]){
            
            if(nums[last-1]==nums[last-2]){
                return nums[last];
            }
            
            
        }
        last-=2;
    }
    
    
    
};