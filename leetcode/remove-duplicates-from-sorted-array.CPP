//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        else if(nums.size()==1){
            return 1;
        }
        int index = 0;
        vector<int> vec;
        for(auto i= nums.begin(); i < nums.end(); ++i){
            index = i-nums.begin();
            
            if(index>0){
                cout<<index;
                if(nums.at(*i-1)!=nums.at(*i)){
                    vec.push_back(nums.at(*i));
                }
                continue;
            }
            vec.push_back(nums.at(*i));    
            
        }
        nums = vec;
        return vec.end()-vec.begin();
    }
};