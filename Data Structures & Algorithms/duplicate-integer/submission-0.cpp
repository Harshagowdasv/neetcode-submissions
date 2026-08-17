class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            if(mp.find(ele)!=mp.end()){
                return true;
            }
            mp[ele]=i;
        }
        return false;
    }
};