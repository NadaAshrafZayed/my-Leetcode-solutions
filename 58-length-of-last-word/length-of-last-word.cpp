class Solution {
public:
    int lengthOfLastWord(string s) {
        bool l2eetHarf=0;
        int ans=0;
        for(int i=s.size()-1; i>=0; i--){
            if( s[i] == ' ' && !l2eetHarf ){
                continue;
            }else if( s[i] == ' ' && l2eetHarf ){
                return ans;
            }else if( s[i] != ' ' ){
                l2eetHarf = 1;
                ans++;
            }
        }
        return ans;


    }
};