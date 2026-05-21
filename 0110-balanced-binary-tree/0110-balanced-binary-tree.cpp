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
    int check(TreeNode *root){
        if(!root)return 0;
        if(check(root->left) == -1 || check(root->right) == -1 || abs(check(root->left) - check(root->right)) > 1)return  -1;
        return 1 + max(check(root->left), check(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        return (check(root)>0);
    }
};