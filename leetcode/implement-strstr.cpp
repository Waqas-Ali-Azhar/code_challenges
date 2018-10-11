
//https://leetcode.com/problems/implement-strstr/description/
class Solution {
public:
    int strStr(string haystack, string needle) {
        //
        int needleLength = needle.length();
        int hayStackLength = haystack.length();
        
        if(needleLength < 1) return 0;
        if(needleLength > hayStackLength) return -1;
        for(int i=0; i < hayStackLength;++i){
            if(haystack[i]==needle[0]){
                if(needle == haystack.substr(i,needleLength))
                    return i;
                
            }
        }
        return -1;
        
    }
};
