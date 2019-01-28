class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0; int j=0; int k = 0;
        vector<int> temp;
        while(j<m && k<n){
            if(nums1[j] < nums2[k]){
                temp.push_back(nums1[j]);
                ++j;
            }
            else{
                temp.push_back(nums2[k]);
                ++k;
                ++i;
            }
        }
       while(j<m){
           temp.push_back(nums1[j]);
           ++j;
           ++i;
       }
       while(k<n){
           temp.push_back(nums2[k]);
           ++k;
           ++i;
       }
       nums1 = temp;
    }
};