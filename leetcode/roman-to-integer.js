/**
 * @param {string} s
 * @return {number}
 */

 //https://leetcode.com/problems/roman-to-integer/description/
 
var romanToInt = function(s) {
    
    var splitted = s.split("");
    
    var sum = 0;
    for(var x =0; x < splitted.length; ++x ){
        var twoDigitsFlag = false;
        if(splitted[x+1]!=null){
            var twoDigits =  splitted[x] + splitted[x+1];    
            twoDigitsFlag = true;
        }
        else{
            var twoDigits = splitted[x];
        }
        
        
        if( x<splitted.length && (["IX","IV","XL","XC","CD","CM"].indexOf(twoDigits)!=-1) && twoDigitsFlag==true ){
         
            switch(twoDigits){
                case 'IV':
                    sum += 4;
                break;
                case 'IX':
                    sum += 9;
                break;
                case 'XL':
                    sum += 40;
                break;
                case 'XC':
                    sum += 90;
                break;
                case 'CD':
                    sum += 400;
                break;
                case 'CM':
                    sum += 900;
                break;
            }
            ++x;
            continue;
         }
        else{
           
            
         switch(splitted[x]){
                
            case 'I':
                sum += 1;
               
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
                
                
                
        }
       
    }

    }
    return sum;
        

    
};