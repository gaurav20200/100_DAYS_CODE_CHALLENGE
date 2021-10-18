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
   TreeNode* pushh(vector<int>&nums,int low, int high){
        if(high<low){
            return NULL;
        }
        int mid=(low+high)/2;
       struct TreeNode *ptr=new TreeNode(nums[mid]);
       ptr->right=pushh(nums,mid+1,high);
       ptr->left=pushh(nums,low,mid-1);
       return ptr;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        struct TreeNode *root= new TreeNode;
        root = pushh(nums,0,nums.size()-1);
        return root;
    }
};