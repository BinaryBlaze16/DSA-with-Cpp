class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=nums[0],maxi=nums[1];
        unordered_set<int>s;
        for(int x:nums){
            mini=min(mini,x);
            maxi=max(maxi,x);
            s.insert(x);
        }
        vector<int>ans;

        for(int i= mini+1;i<=maxi;i++){
             if(!s.count(i)){
                ans.push_back(i);

             }
           
        }
       
        return ans;

    }
};