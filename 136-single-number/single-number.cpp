class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // 6 6 7 7 8
        int ans=-1;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums.size() == 1){
                ans = nums[i];
            }
            else if(i==0 && nums[i] != nums[i+1]){
                ans = nums[i];  //nums[0]
            }
            else if(i==nums.size()-1 && nums[i] != nums[i-1]){
                ans = nums[i];  //last element
            }
            else if( i!=0 && i!=nums.size()-1 && nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                ans = nums[i];
            }
        }
        return ans;
    }
};
