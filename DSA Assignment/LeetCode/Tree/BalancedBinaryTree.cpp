class Solution {
public:

    unordered_map <TreeNode*, int> mp;
    int height(TreeNode* root){
        if(root == NULL) return 0;

        if(mp.find(root) != mp.end()) return mp[root];

        int h = 1 + max(height(root->left), height(root->right));
        mp[root] = h;
        return h;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int l = height(root->left);
        int r = height(root->right);

        if(abs(l-r) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};
