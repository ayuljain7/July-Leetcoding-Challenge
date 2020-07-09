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
    int widthOfBinaryTree(TreeNode* root) {
        vector<unsigned long> lefts;
        return int(dfs(root,0,1,lefts));
    }
     unsigned long dfs(TreeNode * root,int d, unsigned long id,vector<unsigned long> &lefts)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(d>=lefts.size())
        {
            lefts.push_back(id);
        }
        return max(id+1-lefts[d],max(dfs(root->left,d+1,id*2,lefts),dfs(root->right,d+1,id*2+1,lefts)));
    }
};