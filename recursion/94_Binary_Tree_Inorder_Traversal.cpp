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
//leetcode easy
class Solution {
public:
    //left middle right
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;
        if(root == NULL) return list;
        
        vector<int> left = inorderTraversal(root->left);
        vector<int> right =  inorderTraversal(root->right);
        
        for(int i=0;i<left.size();++i) list.push_back(left[i]); //left node
        list.push_back(root->val); //root node
        for(int i=0;i<right.size();++i) list.push_back(right[i]);   //right node
        
        return list;
    }
};
