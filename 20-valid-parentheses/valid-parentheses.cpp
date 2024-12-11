class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;

        bool openOnce=0;
        int i;
        for(i=0 ; i<s.length() ; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){ // open
                openOnce  = 1;
                stk.push(s[i]);
            }else{ // closed
                if(!stk.empty()){
                    if(s[i] == ')' && stk.top() == '('){ stk.pop(); }
                    else if(s[i] == ']' && stk.top() == '['){ stk.pop(); }
                    else if(s[i] == '}' && stk.top() == '{'){ stk.pop(); }
                    else{ break; }
                }
                else{
                    break;
                }
            }
        }

        if(stk.empty() && i == s.length() && openOnce){
            return true;
        }
        return false;

    }
};