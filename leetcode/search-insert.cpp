//https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()<1) return 0;
        for(int i= 0; i<nums.size(); ++i){
            if( nums[i] > target || target==nums[i]){
                return i;
            }
        }
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        return 0;
        
    }
};