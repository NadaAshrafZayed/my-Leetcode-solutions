class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>currVec;
        backtrack(nums, target, currVec, 0);
        return ans;
    }

    void backtrack(vector<int>& nums, int target, vector<int>&currVec, int index){
        if(target == 0){
            ans.push_back(currVec);
            return;
        }
        if (index >= nums.size() || target < 0) {
            return;
        }

        // pick
        currVec.push_back(nums[index]);
        backtrack(nums, target - nums[index], currVec, index);
        // leave
        currVec.pop_back();
        backtrack(nums, target, currVec, index + 1);
    }
};
