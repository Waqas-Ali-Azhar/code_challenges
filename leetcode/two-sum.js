/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

 
 //https://leetcode.com/problems/two-sum/description/


var twoSum = function(nums, target) {
                                  
    var sorted = nums.slice();
    sorted = sorted.sort((a,b)=>a-b);
    var first = 0;
    var second = nums.length-1;
    
    while(sorted[first]+sorted[second]!=target){
        if( sorted[first] + sorted[second] < target){
            ++first;
        }
        else if(sorted[first]+sorted[second]>target){
            --second;
        }
    }
    
    var firstIndex = -1;
    var secondIndex = -1;
    
    for(var x=0; x<nums.length;++x){
        if( firstIndex ==-1 && nums[x]==sorted[first]){
            firstIndex = x;
        }
        else if(secondIndex==-1 && nums[x]==sorted[second]){
            secondIndex = x;
        }
        
    }
    return [firstIndex,secondIndex];
};