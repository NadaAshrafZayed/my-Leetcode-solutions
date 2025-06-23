class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int ans=0;

        while(l < r){
            int width = r - l;
            int height = min(heights[l], heights[r]);
            int amount = width * height;
            ans = max(ans, amount);

            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }

        return ans;
        
    }
};
