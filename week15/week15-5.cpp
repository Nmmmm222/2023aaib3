//week15-5.cpp
class Solution {
public:
    int helper(TreeNode* root) {
        if(root == nullptr) return INT_MAX;
        if(root->left==nullptr && root->right==nullptr) return 1;
        //葉子式有兩個小腳腳 (以上2行 式終止條件 terminal condition)
        int ans1 =helper(root->left);
        int ans2 =helper(root ->right);
        return min(ans1,ans2) +1;
    }
    int minDepth(TreeNode* root){
        int ans =helper(root);
        if(ans==INT_MAX) return 0;
        return ans;
    }
};
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
