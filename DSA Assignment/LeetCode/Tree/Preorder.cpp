class Solution {
public:
    vector<int> ans;
    void preOrder(TreeNode *root) {
    if(root == NULL)
    return;

    stack <TreeNode *> st;
    
    st.push(root);
    
    while(!st.empty())
    {

        TreeNode *temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        
        if(temp -> right)
        st.push(temp -> right);
        
        if(temp -> left)
        st.push(temp -> left);
    }

      
        
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preOrder(root);
        return ans;
    }
};
