/**
 * @param {number} x
 * @return {number}
 */
//https://leetcode.com/problems/sqrtx/
var mySqrt = function(x) {
    if(x<1) return x;
    var low = 1;
    var high = x;
    while(low <= high){
        var mid = Math.floor((low+high)/2);
        
        
        if( mid == x/mid){
            return mid;
        }
        if(mid < x/mid ){
            low = mid+1;
        }
        else if(mid > x/mid){
            high = mid-1;
        }
        
    }
    return high;
    
};

