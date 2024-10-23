class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, vector<int>>mp;
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]].push_back(i);
        }

        for(int i=0 ; i<nums.size() ; i++){
            if( mp.find( target-nums[i] ) != mp.end() ){
                if(nums[i] == target-nums[i]){
                    if(mp[ target-nums[i] ].size() >=2){
                        ans.push_back(i);
                        ans.push_back( mp[ target-nums[i] ][1] );
                        break;
                    }
                }else{
                    ans.push_back(i);
                    ans.push_back( mp[ target-nums[i] ][0] );
                    break;
                }
            }
        }
        
        return ans;
    }
};