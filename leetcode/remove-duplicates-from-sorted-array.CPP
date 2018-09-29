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
        int length = nums.size();
            for(int i=1;i<length;++i){

                   if(nums[i-1]==nums[i]){
                       nums.erase(nums.begin()+i);
                       --i;
                       --length;
                   }     


            }
        
        
        return length;
    }
};