class Solution {
public:
    string smallestPalindrome(string s) {
        int a= s.size();
        if(a==1){
            return s;
        }
        if(a==2){
            return s;
        }
        if(a==3){
            return s;
        }
        int x=a/2;
        string b,c;
        if(a%2==0){
            sort(s.begin(), s.begin() + x);
            b += string(s.begin(), s.begin() + x);
            reverse(s.begin(),s.begin()+x);
            c += string(s.begin(),s.begin()+x);
            return b+c;
        }
        else{
            // string mid=
            sort(s.begin(), s.begin() + x);
            b += string(s.begin(), s.begin() + x);
            reverse(s.begin(),s.begin()+x);
            c += string(s.begin(),s.begin()+x);
            return b+s[x]+c;
        }
    }
};