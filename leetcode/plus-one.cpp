//https://leetcode.com/problems/plus-one/description

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int vSize = digits.size();
        if(vSize==0) return digits;
        int newNum =0;
        for(int i=vSize-1; i>=0;--i){
            ++digits[i];
            if(digits[i]==10){
                digits[i] = 0;
                if(i==0){
                    digits.insert(digits.begin(),1);
                    return digits;
                }
                continue;
            }
            return digits;
        }

      
        
    }
};