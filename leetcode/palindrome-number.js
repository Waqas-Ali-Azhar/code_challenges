/**
 * @param {number} x
 * @return {boolean}
 */

//  https://leetcode.com/problems/palindrome-number/description/
var isPalindrome = function(x) {
    if(x<0)
        return false;
 
    var digits = new Array();
    var reversed = 0; 
    var orignal = x;
    var count=0;
    
    while(orignal>=10){
        digits[count] = orignal%10;
        orignal = Math.floor(orignal/10) ;
        reversed += count*x + digits[count];
        ++count;
    }
    if(reversed>0 || (x>=0 && x<10)){
        digits[count] = orignal;    
    }
    reversed = parseInt(digits.join(""));
    if(x==reversed)
        return true
    return false;
    
    
};