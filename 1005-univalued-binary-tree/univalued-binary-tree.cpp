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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int res=root->val;

        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            int curr=0;
            if(temp==nullptr) return false;
            curr=temp->val;
            if(res!=curr) return false;

            if(temp->left!=nullptr) q.push(temp->left);
            if(temp->right!=nullptr) q.push(temp->right);
        }
        return true;
    }
};