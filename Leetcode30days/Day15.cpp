class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        int productBefore = 1;
        int productAfter = 1;
        for (int i=0; i<nums.size(); i++){
            res[i] *= productBefore;
            productBefore *= nums[i];
        }
        for (int i=nums.size()-1; i>=0; i--){
            res[i] *= productAfter;
            productAfter *= nums[i];
        }
        return res;
    }
};
