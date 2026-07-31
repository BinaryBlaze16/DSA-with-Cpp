class Solution {
public:
    int minimumPushes(string word) {
        vector<int>c(26);
        for(char ch:word){
           c[ch-'a']++;
        }
        sort(c.begin(),c.end(),greater<int>());
        int l=0;
        for(int i=0;i<26;i++){
           l+=c[i]*(i/8+1);
        }
        return l;
    }
};