class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0, longest=0, windowStartIndex;
        string windowSubstr;
        set<char>st; // contain the characters in the substring window

        windowStartIndex = 0;
        for(int i=0; i<s.length(); i++){
            if( st.find(s[i]) != st.end() ){ // existed
                ans=max(ans, longest);
                while(s[windowStartIndex] != s[i]){
                    st.erase(s[windowStartIndex]);
                    windowStartIndex++;
                    longest--;
                }
                windowStartIndex++;
            }else{
                st.insert(s[i]);
                longest++;
            }
            ans=max(ans, longest);
        }

        return ans;
    }
};