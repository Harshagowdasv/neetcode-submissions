class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<vector<int>>buckets(nums.size()+1);
        for(int num : nums){
            mp[num]++;
        }

        for(auto &it : mp){
            buckets[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int i=buckets.size()-1;i>=0;i--){
            for(int num : buckets[i]){
                ans.push_back(num);

                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
