class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n) {
            if(n & 1){ // to check if the last bit is 1
                ans++;
            }
            n >>= 1;    // shift right by 1 bit
        }
        return ans;
    }
};
