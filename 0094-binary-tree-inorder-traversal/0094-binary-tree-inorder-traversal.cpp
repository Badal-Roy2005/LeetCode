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
    vector<int> inorderTraversal(TreeNode* root) {

     vector<int> ans;
     helper(ans , root) ;
     return ans;
    }

    void helper(vector<int>& ans , TreeNode* root){

        if(root != NULL){

        helper(ans , root->left);
        ans.emplace_back(root->val);
        helper(ans , root->right);
        }


    }
};