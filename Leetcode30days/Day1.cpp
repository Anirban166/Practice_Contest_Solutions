// easy with xor
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=0;
        for(int i : nums) n^=i; 
        return n;        
    }
};

Similar to Codeforces 1220A, binary equivalent (Uploaded my solution to that as well here) 
