//https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
    string longestPalindrome(string s) {
        std::string max_string=s.substr(0,1);
        std::string str = "";
        int start=-1; int end=-1;
        
        
        for(int i=0; i<s.length(); ++i){
            
            start =i; end =i;
            while((start >= 0 && end <s.length()) && (s[start] == s[end])){
                --start;
                ++end;
           }
            str = "";
            str = s.substr(start+1,end-start-1);
            max_string = max_string.length() > str.length() ? max_string : str;
            
            
            start = i; end = i+1;
            while((start >= 0 && end < s.length()) && (s[start] == s[end])){
                --start;
                ++end;
            }
            str = "";
            str = s.substr(start+1,end-start-1);
            max_string = max_string.length() > str.length() ? max_string : str;
            
            
            
        }
        
        return max_string;
        
    }
    
    
    
};