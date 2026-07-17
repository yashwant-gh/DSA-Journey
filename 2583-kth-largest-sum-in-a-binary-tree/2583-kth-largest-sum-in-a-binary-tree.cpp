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
    long long kthLargestLevelSum(TreeNode* root, int k){
        vector<long long >ans;
        if(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);
        long long sum =0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                sum+=q.front()->val;
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
            }
            ans.push_back(sum);
            sum = 0;
        }
        sort(ans.begin(),ans.end(),greater<long long>());
        if (k>ans.size()) return -1;
        return ans[k-1];
    }
};