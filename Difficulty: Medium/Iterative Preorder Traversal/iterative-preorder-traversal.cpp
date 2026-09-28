/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>preorder;
        if(root==NULL)return preorder;
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* node = st.top();
            st.pop();
            preorder.push_back(node->data);
            if(node->right!=NULL)st.push(node->right);
                  if(node->left!=NULL)st.push(node->left);
        }
        return preorder;
    }
};