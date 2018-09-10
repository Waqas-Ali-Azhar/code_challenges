/**
 * @param {number} x
 * @return {number}
 */

 //https://leetcode.com/problems/reverse-integer/description/
 
var reverse = function(x) {
    
    
    var y = x ;
    
    x = x.toString();
    x = x.split("");
    x = x.reverse();
    if(y < 0)    
        x = '-'+x.join("");
    else
        x = x.join("");
    x = parseInt(x);
    if( x > 2147483647 || x < -2147483648)
        return 0;
        
    return x;
};