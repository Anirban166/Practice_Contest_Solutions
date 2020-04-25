bool canJump(vector<int>& nums, int begin=0, int last=0) 
{
   return last>=nums.size()-1?true:(begin>last?false:canJump(nums,begin+1,max(last,begin+nums[begin])));
}
