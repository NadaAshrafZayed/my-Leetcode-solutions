class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string first_word = strs[0];
        string last_word = strs[ strs.size()-1 ];
        string ans = "";
        for(int i=0 ; i<min(first_word.length(), last_word.length()); i++){
            if(first_word[i] != last_word[i]){
                return ans;
            }
            ans += first_word[i];
        }
        return ans;
    }
};