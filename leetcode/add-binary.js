/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
//https://leetcode.com/problems/add-binary/
var addBinary = function(a, b) {
   var i = a.length-1;
   var j = b.length-1;
   var carry = 0;
   var str = '';

   while(a[i] || b[j]){
       var num1 = a[i] || '0';
       var num2 = b[j] || '0';
       var sum = parseInt(num1) + parseInt(num2) + parseInt(carry);
       var rem = sum%2;
       var div = Math.floor(sum/2);
       
       if(sum%2 == 0 ){ str='0'+str; if(div>0) carry = 1;}
       if(sum%2==1){ 
           if(div==0){
               str='1'+str; carry = 0;
           }
           else{
               str='1'+str; carry = 1; 
           }
        }
       --i,--j;
   }   
      
    if(carry){
        str = carry + str
    }
       
   return str; 
};