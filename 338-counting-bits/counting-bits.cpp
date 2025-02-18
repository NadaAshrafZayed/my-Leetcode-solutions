class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0 ; i<=n ; i++){
            bitset<32>bits_num(i); // binary representation

            int onesCnt=0;
            for(int i=0 ; i<32; i++){
                if(bits_num[i] == 1){
                    onesCnt++;
                }
            }
            ans.push_back(onesCnt);
        }
        return ans;
    }
};