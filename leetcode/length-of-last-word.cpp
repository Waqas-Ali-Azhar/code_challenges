//https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0; int word = 0;
        int i =0;
        while(s[i]!=NULL){
            if((int)s[i]==32){
            if(len > 0)
                word = len;
                len = 0;
                ++i;
                continue;
            }
            ++i;
            ++len;
            
        }
        if(len<1){
            return word;
        }
        return len;
    }
};