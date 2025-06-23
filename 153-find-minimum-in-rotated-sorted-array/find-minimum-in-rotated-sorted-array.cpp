class Solution {
public:
    int findMin(vector<int> &nums) {
        /*
        I want to determine to which portion does the [mid] belong to
        This will determine where to move; left portion or right portion
        [neetcode video explains this well]
        */
        int l=0, r=nums.size()-1;
        int mid = (l+r)/2;
        int ans = nums[0];

        while(l <= r){
            if (nums[l] < nums[r]) { // means sorted subarray
                ans = min(ans, nums[l]);
                break;
            }
            
            mid = (l+r)/2;
            ans = min(ans, nums[mid]);
            if(nums[mid] >= nums[l]){ // that means it belongs to the right portion (so left portion is smaller numbers)
                l = mid + 1;
            }else{ // belongs to the left portion (so right portion is smaller numbers)
                r = mid - 1;
            }
        }
        return ans;
    }
};
