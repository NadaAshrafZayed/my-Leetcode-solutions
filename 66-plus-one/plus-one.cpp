class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carryUpOne=0, allNines=0;
        for(int i=digits.size()-1 ; i>=0 ; i--){
            if(digits[i] != 9){
                digits[i]++;
                break;
            }else if(digits[i] == 9){
                digits[i] = 0;
//                carryUpOne = 1;
                if(i == 0){
                    allNines = 1;
                }
            }
        }
        if(!allNines){
            return digits;
        }else{
            vector<int>digits2;
            digits2.push_back(1);
            for(auto d:digits){
                digits2.push_back(d);
            }
            return digits2;
        }
    }
};