class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mp;
        vector<pair<int,int>>numOccurrences;

        for(auto num: nums){
            mp[num]++;
        }

        for(auto a:mp){
            numOccurrences.push_back({a.second, a.first}); //{occ, number itself}
        }

        // sort descending
        // sort(numOccurrences.begin(), numOccurrences.end(), greater<pair<int,int>>());
        sort(numOccurrences.rbegin(), numOccurrences.rend());

        vector<int>ans;
        for(int i=0 ; i<k ; i++){
            ans.push_back(numOccurrences[i].second);
        }

        return ans;
    }
};
