/**
 * @param {string} s
 * @return {string}
 */
var decodeString = function(s) {
    if(s.length==0){
        return s;
    }
    
     var out ='';
        var ch = '';
        var tempr = '';
        var number = -1;
        var i = 0;
        
        while(s[i]!=null){
            if(!isNaN(s[i])){
                if(number == -1){
                    number = s[i];
                }
            }
            else if(isNaN(s[i])){
                if(number > -1 && s[i]!=']' && s[i]!='['){
                    tempr += s[i];
                }
                else if(number > -1 && s[i]==']'){
                    while(number!=0){
                        ch += tempr ;
                        --number;
                    }
                    out += ch;
                    ch = '';
                    tempr = '';
                    number = -1;
                    
                }
                else if(number == -1 && s[i]!=']'){
                    out += s[i];
                }
            }
            ++i;
        }
        
        return out;
    
};