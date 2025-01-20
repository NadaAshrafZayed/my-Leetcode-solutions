class Solution {
public:
    bool isPalindrome(string s) {
        string s_trimmed="";
        for(int i=0; i<s.size(); i++){
            if( isalnum(s[i]) ){
                s_trimmed += tolower(s[i]);
            }
        }
        string ss = s_trimmed; // the original
        reverse(s_trimmed.begin(), s_trimmed.end());

        if(ss == s_trimmed){
            return true;
        }
        return false;

    }
};
