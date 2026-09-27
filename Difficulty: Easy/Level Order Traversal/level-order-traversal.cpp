/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        vector<int>ans;
        if(root == NULL)return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                Node* n = q.front();
                q.pop();
                if(n->left !=NULL){
                    q.push(n->left);
                }
                if(n->right !=NULL)q.push(n->right);
                ans.push_back(n->data);
            }
            
        }
        return ans;
    }
};