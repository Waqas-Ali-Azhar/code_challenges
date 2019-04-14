//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.empty()) return 0;
        int pos1 = 0;
        int size = height.size();
        int pos2 = size-1;
        int max_area = -1;
        
        while(pos1 < pos2){
            int width = pos2-pos1;
            int common = min(height[pos1],height[pos2]);
            max_area = max( max_area,common * width );
            if(height[pos1] < height[pos2] ) 
                ++pos1;
            else 
                --pos2;
            
        }

       return max_area;
        
    }
};