class Solution {
public:
    int minimumPushes(string A) {
        int l=0;
        for(int i=0;i<A.size();i++){
            l+=i/8+1;
        }
        return l;
    } 
};