https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i = 0;
        while(i<nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                --i;
            }
            ++i;
        }
        return nums.size();
        
    }   
};