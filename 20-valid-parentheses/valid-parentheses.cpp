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


/////////////////////////////// ANOTHER SOLUTION ///////////////////////////
//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char>stk;
//
//
//        for(i=0 ; i<s.length() ; i++) {
//            if (c == '(' || c == '[' || c == '{') {
//                stack.push(c);
//            } else {
//                // If the stack is empty, there is no matching opening bracket, so return false
//                if (stack.isEmpty()) {
//                    return false;
//                }
//                char top = stack.peek();
//                if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
//                    // If it is, pop the opening bracket from the stack
//                    stack.pop();
//                } else { // Otherwise, the brackets don't match, so return false
//                    return false;
//                }
//            }
//
//        }
//        return stack.isEmpty();
//        
//    }
//};
