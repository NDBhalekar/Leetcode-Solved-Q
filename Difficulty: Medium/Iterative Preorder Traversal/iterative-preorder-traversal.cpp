class Solution {
public:
    vector<int> preOrder(Node* root) {
        vector<int> preorder;

        if (root == NULL)
            return preorder;

        stack<Node*> st;
        st.push(root);

        while (!st.empty()) {
            root = st.top();
            st.pop();

            preorder.push_back(root->data);

            // Right first
            if (root->right != NULL)
                st.push(root->right);

            // Left second
            if (root->left != NULL)
                st.push(root->left);
        }

        return preorder;
    }
};