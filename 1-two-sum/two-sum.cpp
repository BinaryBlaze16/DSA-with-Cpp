class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int h;
        int i;
        int arr[2];
        for(i=0;i<nums.size()-1;i++){
           for(h=nums.size()-1;h>i;h--){
            if((nums[i]+nums[h])==target){
                
                return{i,h};
                
            }
           }
        }
        return {};
    }
};