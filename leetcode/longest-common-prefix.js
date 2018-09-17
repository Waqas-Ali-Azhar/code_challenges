/**
 * @param {string[]} strs
 * @return {string}
 */

// https://leetcode.com/problems/longest-common-prefix/description/

var longestCommonPrefix = function(strs) {
    if(!strs[0]){
        return "";
    }
    
    var prefix = strs[0].split("");
    var match = 0;
    var newarr = new Array();
    
    
    for(var i=0; i<strs.length; ++i){
        match = 0;

        var word = strs[i].split("");

        for(var x=0; x<prefix.length; ++x){
            if(prefix[x]==word[x]){
                if(x>0 && match==0){
                    return "";
                }
                ++match;
                
            }
            else{
                if(match<1){
                    return "";
                    
                }
                else{
                    prefix[x] = '';
                    
                }
                    
                
            }
        }
        
    }  
    return prefix.join("");

};