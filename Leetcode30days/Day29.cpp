/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int mps(TreeNode* root, int &max_val) {
      if( root == nullptr )
        return 0;   
      max_val = max(root->val, max_val);
      int l1 = mps(root->left, max_val);
      int l2 = mps(root->right, max_val);
      if( l1 + l2 + root->val > 0 ) {
        max_val = max(l1 + l2 + root->val, max_val);  
      }  
      return max(0, max({0, l1, l2}) + root->val);  
    }
public:
    int maxPathSum(TreeNode* root) {
      int max_val = INT_MIN;  
      int r = mps(root, max_val);
      return max_val;  
    }
};
