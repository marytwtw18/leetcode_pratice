//leetcode easy
class Solution {
public:
    //middle left right
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> list;
        if(root == NULL) return list;
        
        vector<int> left = preorderTraversal(root->left);
        vector<int> right =  preorderTraversal(root->right);
        
        list.push_back(root->val);   //root node
        for(int i=0;i<left.size();++i) list.push_back(left[i]); //left node
        for(int i=0;i<right.size();++i) list.push_back(right[i]);   //right node
        
        return list;
    }
};
