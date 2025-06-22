class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // This is a classic “bottom-up” dynamic programming (DP) solution.

        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (i - coins[j] >= 0) {
                    dp[i] = min( dp[i] , dp[i - coins[j]] + 1);
                }
            }
        }

        int ans = dp[amount]; // store the result
        if (ans == amount + 1) {
            return -1;           // not possible
        } else {
            return ans;       // return the computed value
        }


    }
};