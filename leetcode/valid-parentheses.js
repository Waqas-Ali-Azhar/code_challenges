/**
 * @param {string} s
 * @return {boolean}
 */

 // https://leetcode.com/problems/valid-parentheses/description/
var isValid = function(s) {
    
    if(!s.length>0){
        return true;
    }
    if(s.length%2!=0)
        return false;
    
    if(s.length>1){
        if(s.charAt(0)+s.charAt(1) == '()' || s.charAt(0)+s.charAt(1) == '{}' || s.charAt(0)+s.charAt(1) == '[]' ){
            
            for(var x=0;x<s.length;){
                switch(s.charAt(x)+s.charAt(x+1)){
                    case '()':
                        x=x+2;
                        break;
                    case '{}':
                        x=x+2;
                        break;
                    case '[]':
                        x=x+2;
                        break;
                    default:
                        return false;
                }
            }
            
            return true;
            
        }
        else{
            
            var right = '';
            var left = s.length/2;


            for(var i=left-1; i>=0; --i){
                switch(s.charAt(i)){
                    case '(':
                        right += ')';
                        break;
                    case '{':
                        right += '}';
                        break;
                    case '[':
                        right += ']';
                        break;
                }


            }
            
            console.log(right);
            if(s.substring(s.length/2) == right){
                return true;
            }
            return false;
            
        }
    }
    
   
        

    
};