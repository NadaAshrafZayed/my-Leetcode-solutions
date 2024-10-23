class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // The numbers and their indices
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                // If not, add the current number and its index to the map
                mp[nums[i]] = i;
            else
                // If yes, return the indices of the current number and its complement
                return {mp[target - nums[i]], i};
        }
        return {-1, -1};
    }
};