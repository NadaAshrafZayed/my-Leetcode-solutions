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



//////////////////////////// ANOTHER GOOD SOLUTION ////////////////////////////
/*
Starting from last digit, add 1 then if the number is not 10, just add 1 to the last index and return the array.

If 10, add 0 to the current index then continue to loop until we find a number except 10 or reach index 0.


If we reach index 0, then add 1 to the first index and other all numbers should be 0, because we have 10 in each digit and have carry for the next digit.

*/
