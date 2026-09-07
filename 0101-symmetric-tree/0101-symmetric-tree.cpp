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
 bool areInvert(TreeNode* p,TreeNode* q){
   
   if(p==nullptr && q==nullptr) return true;
  if(p==nullptr || q==nullptr || p->val != q->val) return false;
       
   return areInvert(p->left,q->right)&&areInvert(p->right,q->left);

 }

 bool isSymmetric(TreeNode* root){
   return areInvert(root->left,root->right);
 }
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //  if(p==nullptr && q==nullptr) return true;
    //     if(p==nullptr || q==nullptr || p->val != q->val) return false;
    //     return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    // }
    // bool isSymmetric(TreeNode* root) {
    //     invert(root->right);
    //     bool ans= isSameTree(root->left,root->right);
    //     invert(root->right);
    //     return bool;
        
    // }
};