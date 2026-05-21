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
    
    int good(TreeNode* root, int mx){
        if(!root)return 0;
        int ans = 0;
        if(root->val >= mx){
            mx = root->val;
            ans = 1;
        }
        ans += good(root->left, mx);
        ans += good(root->right, mx);
        return ans;
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        return 1 + good(root->left, root->val) + good(root->right, root->val);
    }
};