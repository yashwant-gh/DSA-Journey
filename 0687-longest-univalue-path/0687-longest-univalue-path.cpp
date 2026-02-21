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
int ans=0;
int dfs(TreeNode* root){
    if(!root )return 0;
    int l=dfs(root->left);
    int r=dfs(root->right);
    int L=0;
    int R=0;
    if(root->left && root->left->val==root->val)L=l+1;
    if(root->right && root->right->val==root->val)R=r+1;
    ans=max(ans,L+R);
    return max(L,R);
}
    int longestUnivaluePath(TreeNode* root) {
     dfs(root);
     return ans;
    }
};