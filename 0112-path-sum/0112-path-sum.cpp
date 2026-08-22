class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        
        // Leaf node validation
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        
        // Pass the remaining target down to children
        return hasPathSum(root->left, targetSum - root->val) || 
               hasPathSum(root->right, targetSum - root->val);
    }
};
