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
    
public:
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) 
    {
        return checkValidity(root, arr, 0);
    }
    
    bool checkValidity(TreeNode* root, int[] arr, int index)
    {
        
        if(root = nullptr || index >= arr.size()) 
            return false;
        
        if(root.left == nullptr && root.right == null)
            return ((root.val == arr[index]) && (index == arr.size()-1));
        
        if(root.val == arr[index])
            return checkValidity(root.left, arr, index+1) || checkValidity(root.right, arr, index+1);
        
        return false;
    }
};
