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
    long long cnt = 0, pref = 0;
    unordered_map<long long, long long> mpp;

    void dfs(TreeNode* root, int target){
        if(!root) return;
        pref += root->val;
        
        cnt += mpp[pref - target];

        mpp[pref]++;

        dfs(root->left, target);
        dfs(root->right, target);

        mpp[pref]--;
        pref -= root->val;
    }

    int pathSum(TreeNode* root, int targetSum) {
        mpp[0] = 1;
        dfs(root, targetSum);
        return cnt;
    }
};