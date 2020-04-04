class Solution { //Kadane
public:
    int maxSubArray(vector<int>& n) {
        int c=0, ans= INT_MIN;
        for(int x: n)
        { c+=x; 
          res = max(ans,c);
          c=max(c,0);
        }
        return res;
    }
};
