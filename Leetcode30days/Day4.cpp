class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
       for (int i = 0; i < nums.size() ; i++) 
        if (nums[i] != 0) 
            swap(nums[c++], nums[i]); // Increment counter to skip elements which are not 0
    }
};
