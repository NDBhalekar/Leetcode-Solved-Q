class Solution {
public:
    vector<int> preOrder(Node* root) {
        vector<int> arr;

        function<void(Node*)> dfs = [&](Node* root) {
            if (root == NULL) return;

            arr.push_back(root->data);
            dfs(root->left);
            dfs(root->right);
        };

        dfs(root);
        return arr;
    }
};