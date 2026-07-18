class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mm=*max_element(nums.begin(),nums.end());
        int mx = *min_element(nums.begin(),nums.end());
        int res= gcd(mm,mx);
        return res;
    }
};