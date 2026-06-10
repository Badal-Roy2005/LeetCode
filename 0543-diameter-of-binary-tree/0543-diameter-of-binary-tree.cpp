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
    int maxi = -1;
    int depth(TreeNode* root){
        if(root == NULL) return 0;

        int lh = depth(root->left);
        int rh = depth(root->right);
        maxi = max(maxi , lh + rh);
        return 1 + max(lh , rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return maxi;

    }
};