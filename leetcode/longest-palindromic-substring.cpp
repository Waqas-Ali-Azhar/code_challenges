//https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
    string longestPalindrome(string s) {
        std::string max_string = "";
        
        if(s.length()>0){

            vector<string> dec(1000,""); 
            std::string str1;
            std::string str2;
            
            
            for(int i=0; i<s.length(); ++i){
                
                if(i>0){
                    if(s[i] ==s[i+1]){
                        while(s[i] == s[i+1] && i < s.length()){
                        
                            str1+=s[i];
                            ++i;
                        }
                        if(s[i]==s[i-1])
                            str1+=s[i];
                        
                        max_string = max_string.length() > str1.length() ? max_string: str1;
                        
                    }
                    else{
                        int j = i-1;
                        int k = i+1;
                        if(s[j]==s[k]){
                            while( (j>0 && k < s.length()) && (s[j]==s[k]) ){
                                --j;
                                ++k;
                            }
                            str2 = s.substr(j,k-j+1);
                            i = k;
                            dec[i] = str2;
                            
                        }
                        
                    }
                     
                max_string = max_string.length() > str2.length() ? max_string: str2;
                    str1  = "";
                    str2  = "";
                    
                }
                
            }
            
        }
    
        return max_string;
        
    }
};