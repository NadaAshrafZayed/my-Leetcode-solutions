class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end()); // -3 -3 1 1 2 3 4

        for(int i=0 ; i<nums.size() ; i++){
            if(i>0 && nums[i] == nums[i-1]){ // -3 -3 ( so we don't repeat -3 as 
                                             // the firstNumber (a) )
                continue;
            }

            int l=i+1, r=nums.size()-1;
            while(l < r){
                int threeSum = nums[i] + nums[l] + nums[r];
                if(threeSum > 0){
                    r--;
                }
                else if(threeSum < 0){
                    l++;
                }else{
                    ans.push_back({nums[i], nums[l], nums[r]});

                    l++;
                    // To not repeat same number at position (b)
                    while(nums[l] == nums[l-1] && l<r){
                        l++;
                   }
                }
            }
        }

        return ans;
    }
};