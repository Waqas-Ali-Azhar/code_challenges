/**
 * @param {string[]} strs
 * @return {string}
 */

// https://leetcode.com/problems/longest-common-prefix/description/

var longestCommonPrefix = function(strs) {
    
    var prefix = '';
    
    for(var i=0; i<strs.length; ++i){
        
        var prefix = strs[i].split("").join();
        
        
        if(strs[i+1]){
           
            
            prefix = '';
            var nextWord = strs[i+1].split(""); 
            for(var x=0; x<word.length;++x ){
                if(word[x]==nextWord[x]){
                    prefix += word[x];
                    
                }        
                else{
                    if(prefix==''){
                        prefix = strs[i];
                    }
                    break;
                }
            }
        }
        else{
            if(prefix){
                
                var nextWord = prefix.split("");
                prefix = '';
                for(var x=0; x<word.length;++x ){

                    if(word[x]==nextWord[x]){

                        prefix += word[x];
                    }        
                    else{
                        return prefix;
                    }
                }    
            }
            else{
                return word.join("");        
            }
        }
        
    }
    return prefix;

};