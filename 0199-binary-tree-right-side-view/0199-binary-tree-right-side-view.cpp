class Solution {
public:
    int level(TreeNode* root) {
        if (root == NULL) return 0;

        return 1 + max(level(root->left), level(root->right));
    }

    void preorder(TreeNode* root, int lvl, vector<int>& ans) {
        if (root == NULL) return;

        ans[lvl] = root->val;

        preorder(root->left, lvl + 1, ans);
        preorder(root->right, lvl + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(level(root));

        preorder(root, 0, ans);

        return ans;
    }
};