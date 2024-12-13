class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1; // since awl element kda kda unique
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++; // 3dd el uniques
            }
        }
        return j;
    }
};