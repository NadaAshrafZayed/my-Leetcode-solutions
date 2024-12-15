class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool found = 0;
        int l=0, r=nums.size()-1, mid;
        while(l <= r){
            mid = (l+r)/2;
            if(nums[mid] == target){
                found = 1;
                return mid;
            }else if(nums[mid] < target){
                l = mid + 1;
            }else{ //if(nums[mid] > target)
                r = mid - 1;
            }
        }
        // not found kda
        return (nums[mid] > target)? mid: mid+1;

    }
};
