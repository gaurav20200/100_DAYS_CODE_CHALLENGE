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
    bool issame(TreeNode *left, TreeNode *right){
        if(left==NULL&&right==NULL)return true;
        else  if(left==NULL||right==NULL)return false;
        else if(left->val!=right->val)return false;
        return issame(left->left,right->left)&&issame(left->right,right->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)return false;
         if(issame(root,subRoot)){
             return true;
         }else  return isSubtree(root->right,subRoot) || isSubtree(root->left,subRoot);
    }
};