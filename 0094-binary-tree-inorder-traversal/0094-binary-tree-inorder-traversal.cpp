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
vector<int> psh(vector<int>&ans,TreeNode* root){
    if(!root)return ans;
    psh(ans,root->left);
    ans.push_back(root->val);
    psh(ans,root->right);
    return ans;
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        return psh(ans,root);
    }
};