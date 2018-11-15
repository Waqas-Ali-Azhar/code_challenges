/**
 * @param {string} s
 * @return {string}
 */

//https://leetcode.com/problems/decode-string/description/

var decodeString = function(s) {
    if(!s.length){
        return s;
    }
    let stack = [];
    var ch='';
    var i = 0;
    var temp = '';
    var out = '';
    
    while(s[i]!=null){
        if(s[i]!=']'){
            if(isNaN(s[i]))
            stack.push(s[i]);
            else{
                while(!isNaN(s[i])){
                    ch+= s[i];
                    ++i;
                }
                stack.push(ch);
                stack.push(s[i]);
                ch = '';
                
            }
        }
        else if( s[i]==']'){
            while(stack[stack.length-1]!='['){
                temp = stack.pop() + temp;    
            }
            stack.pop();
            if(stack.length){
                var number = stack.pop();
                while(number>=1){
                    ch = temp + ch;
                    --number;
                    
                }
                stack.push(ch);
                ch='';
                temp = '';
            }
        }
        ++i;
    }
    while(stack.length){
        
        out= stack.pop()+out;
    }
    return out;
    
};

/* Undevelopment using Array approach */
// var decodeString = function(s) {
//     if(s.length==0){
//         return s;
//     }
    
//      var out ='';
//         var ch = '';
//         var tempr = '';
//         var number = -1;
//         var i = 0;
        
//         while(s[i]!=null){
//             if(!isNaN(s[i])){
//                 if(number == -1){
//                     number = s[i];
//                 }
//             }
//             else if(isNaN(s[i])){
//                 if(number > -1 && s[i]!=']' && s[i]!='['){
//                     tempr += s[i];
//                 }
//                 else if(number > -1 && s[i]==']'){
//                     while(number!=0){
//                         ch += tempr ;
//                         --number;
//                     }
//                     out += ch;
//                     ch = '';
//                     tempr = '';
//                     number = -1;
                    
//                 }
//                 else if(number == -1 && s[i]!=']'){
//                     out += s[i];
//                 }
//             }
//             ++i;
//         }
        
//         return out;
    
// };