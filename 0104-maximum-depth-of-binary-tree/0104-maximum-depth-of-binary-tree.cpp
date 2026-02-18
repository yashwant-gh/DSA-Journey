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
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        int l=0;
        int r=0;
        TreeNode* templ=root;
        TreeNode* tempr=root;
        while(templ){
            l++;
            templ=templ->left;
        }
        while(tempr){
            r++;
            tempr=tempr->right;
        }
        return max(l,r);
    }
};