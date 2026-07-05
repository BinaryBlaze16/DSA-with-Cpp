class Solution {
public:
    int findMin(vector<int>& nums) {
        int maxi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<maxi){

                maxi=nums[i];
            }
        }
        return maxi;
    }
};