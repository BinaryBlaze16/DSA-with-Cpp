class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while (n > 0) {
        digits.insert(digits.begin(), n % 10); // take last digit
        n /= 10; // remove last digit
    }
    sort(digits.begin(),digits.end());
    int l = digits.size();
    return (digits[l-1]*digits[l-2]);
        
    }
};