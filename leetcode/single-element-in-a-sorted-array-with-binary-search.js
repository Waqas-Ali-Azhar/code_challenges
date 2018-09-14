/**
 * @param {number[]} nums
 * @return {number}
 */

 // https://leetcode.com/problems/single-element-in-a-sorted-array/description/
var singleNonDuplicate = function(nums) {
    
    return search(nums,0,nums.length-1);
    
};

function search(arr,min,max){
    if(min>max){
        return;
    }
    
    if(min==max){
        
        return arr[min];
        
    }
    
    var mid =  (min+max)/2;
    
    if(mid % 2 == 0){
        if(arr[mid]==arr[mid+1]){
           return search(arr,mid+2,max);
        }
        else{
           return  search(arr,min,mid);
        }
    }
    else if(mid % 2!=0){
        
        if(arr[mid]==arr[mid-1]){
           return search(arr,mid+1,max);
        }
        else{
            return search(arr,min,mid-1);
        }
        
    }
}