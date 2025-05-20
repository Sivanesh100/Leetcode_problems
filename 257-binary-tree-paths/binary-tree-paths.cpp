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
    void  travle(TreeNode* curr,vector<string>&res,string temp)
    {
        if(!curr) return;
        if(!curr->left&&!curr->right)
        {
           temp+=to_string(curr->val);
           res.push_back(temp);
           return;
        }
        temp+= to_string(curr->val)+ "->";
        travle(curr->left,res,temp);
        travle(curr->right,res,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        travle(root,res,"");
        return res;
    }
};