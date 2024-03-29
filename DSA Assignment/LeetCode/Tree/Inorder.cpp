class Solution {
public:
    vector<int> ans;
    void inOrder(TreeNode *root) {
         if(root == NULL) return;
        if(root->left){
            inorderTraversal(root->left);
        }
        ans.push_back(root->val);
        if(root->right){
            inorderTraversal(root->right);
        }
        
    }

    vector<int> inorderTraversal(TreeNode* root) {
    inOrder(root);
    return ans;
    }
};
