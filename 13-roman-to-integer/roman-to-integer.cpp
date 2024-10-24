map<string, int>mp;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        mp["I"] = 1, mp["V"] = 5, mp["X"] = 10;
        mp["L"] = 50, mp["C"] = 100, mp["D"] = 500, mp["M"] = 1000;
        mp["IV"] = 4, mp["IX"] = 9;
        mp["XL"] = 40, mp["XC"] = 90;
        mp["CD"] = 400, mp["CM"] = 900;

        for(int i=0 ; i<s.size() ; ){
            if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    ans += mp["IV"];
                    i+=2;
                }else if(s[i+1] == 'X'){
                    ans += mp["IX"];
                    i+=2;
                }else{
                    ans += mp["I"];
                    i++;
                }
            }else if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    ans += mp["XL"];
                    i+=2;
                }else if(s[i+1] == 'C'){
                    ans += mp["XC"];
                    i+=2;
                }else{
                    ans += mp["X"];
                    i++;
                }
            }else if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    ans += mp["CD"];
                    i+=2;
                }else if(s[i+1] == 'M'){
                    ans += mp["CM"];
                    i+=2;
                }else{
                    ans += mp["C"];
                    i++;
                }
            }else{
                // convert from char to string
                char ch = s[i];
                string str(1, ch);
                ans += mp[ str ];
                i++;
            }
        }
        return ans;


    }
};