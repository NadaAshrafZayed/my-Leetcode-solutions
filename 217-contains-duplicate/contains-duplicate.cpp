class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>stt;
        for(int i=0 ; i<nums.size() ; i++){
            stt.insert(nums[i]);
        }
        if(stt.size() != nums.size()){
            return true;
        }
        return false;
    }
};


