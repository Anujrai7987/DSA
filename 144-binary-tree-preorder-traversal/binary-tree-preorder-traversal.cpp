class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        if (root == NULL) {
            return ans;
        }

        st.push(root);

        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            ans.push_back(curr->val);

            if (curr->right != NULL) {
                st.push(curr->right);
            }

            if (curr->left != NULL) {
                st.push(curr->left);
            }
        }

        return ans;
    }
};