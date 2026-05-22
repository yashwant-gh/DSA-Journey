class Solution {
public:

    int cnt = 0;

    int inorder(TreeNode* root, int k){

        if(!root)
            return -1;

        int left = inorder(root->left, k);

        if(left != -1)
            return left;

        cnt++;

        if(cnt == k)
            return root->val;

        return inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {

        return inorder(root, k);
    }
};