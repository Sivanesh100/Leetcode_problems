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

    void iot(TreeNode* temp,int & sum,int lf)
    {
        if(temp==NULL) return;
        if(!temp->left&&!temp->right&&lf)
        {
            sum+=temp->val;
        }
        iot(temp->left,sum,1);
        iot(temp->right,sum,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        iot(root,sum,0);
        return sum;
    }
};






