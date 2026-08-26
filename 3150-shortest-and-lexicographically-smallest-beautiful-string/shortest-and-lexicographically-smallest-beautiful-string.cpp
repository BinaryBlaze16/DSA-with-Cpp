int bit_width(__uint128_t x) {
    uint64_t hi = x >> 64;
    return hi ? 128 - countl_zero(hi) : 64 - countl_zero((uint64_t)x);
}

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size(), left = 0, start = n;
        __uint128_t curr = 0, best = -1;

        for (int right = 0; right < n; right++) {
            // append bit to curr
            curr = (curr << 1) | (s[right] & 1);
            k -= s[right] & 1;
            // too many ones, pop the last bit and move left pointer
            if (k < 0) {
                int len = bit_width(curr);
                left = right - len + 2, k = 0;
                curr &= (((__uint128_t)1 << (len - 1)) - 1);
            }
            // exactly k ones, compare masks
            if (k == 0) {
                left = right - bit_width(curr) + 1;
                if (curr < best)
                    start = left, best = curr;
            }
        }

        return s.substr(start, bit_width(best));
    }
};