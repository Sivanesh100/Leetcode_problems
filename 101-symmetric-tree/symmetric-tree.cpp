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

 bool isSym(TreeNode* p,TreeNode* q)
 {
    if(p==NULL&&q==NULL) return true;
    if(p==NULL||q==NULL) return false;
    if(p->val!=q->val) return false;
    return isSym(p->left,q->right) && isSym(p->right,q->left);
 }
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSym(root,root);
    }
};