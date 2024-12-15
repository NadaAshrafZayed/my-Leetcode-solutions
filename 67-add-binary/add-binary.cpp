class Solution {
public:
    string addBinary(string a, string b) {
        // 1. hsawy toolhom
        int aLen = a.length(), bLen = b.length();
        if(aLen > bLen){
            int diff = aLen - bLen;
            string bEdit="";
            while(diff != 0){
                bEdit += '0';
                diff--;
            }
            for(int i=0; i<b.length() ; i++){
                bEdit += b[i];
            }
            b = bEdit;
        }else if(aLen < bLen){
            int diff = bLen - aLen;
            string aEdit="";
            while(diff != 0){
                aEdit += '0';
                diff--;
            }
            for(int i=0; i<a.length() ; i++){
                aEdit += a[i];
            }
            a = aEdit;
        }

        bool carryUpOne=0;
        string ans="";
        // kda hma equal lengths;
        for(int i=a.length()-1 ; i>=0 ; i--){
            if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')){
                if(!carryUpOne){
                    ans += '1';
                    carryUpOne = 0; // zy ma hoa
                }else{ // feeh carry up one
                    ans += '0';
                    carryUpOne = 1;
                }
            }else if(a[i]=='1' && b[i]=='1'){
                if(!carryUpOne){
                    ans += '0';
                    carryUpOne = 1;
                }else{ // feeh carry up one
                    ans += '1';
                    carryUpOne = 1;
                }
            }else if(a[i]=='0' && b[i]=='0'){
                if(!carryUpOne){
                    ans += '0';
                    carryUpOne = 0;
                }else{ // feeh carry up one
                    ans += '1';
                    carryUpOne = 0;
                }
            }
        }

        reverse(ans.begin(), ans.end());
        if(carryUpOne){
            string ansEdit = "1";
            return (ansEdit+ans);
        }else{
            return ans;
        }

    }
};
