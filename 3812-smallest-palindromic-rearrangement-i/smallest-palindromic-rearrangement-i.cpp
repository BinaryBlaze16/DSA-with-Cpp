class Solution {
public:
    string smallestPalindrome(string s) {
       vector<int>cnt(26);
       for(char c:s){
        cnt[c-'a']++;
       }
       string l,m;
       for(int i=0;i<26;i++){
        l+=string(cnt[i]/2,'a'+i);
        if(cnt[i]%2==1){
            m='a'+i;
        }
       }
       string ans=l+m;
       reverse(l.begin(),l.end());
       return ans+l;
    }
};