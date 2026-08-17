class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefixproduct;
        int pro=1;
        for(int num : nums){
            prefixproduct.push_back(pro);
            pro*=num;
        }
        int suffix=1;
        for(int i=nums.size()-1;i>=0;i--){
            prefixproduct[i]*=suffix;
            suffix*=nums[i];
        }
        return prefixproduct;

    }
};
