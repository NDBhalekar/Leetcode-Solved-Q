/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class myStack {
    int sizei;
  Node *top;

  public:
    myStack() {
        // Initialize your data members
         sizei = 0;
    top = nullptr;
    
    }

    bool isEmpty() {
        // check if the stack is empty
        return sizei==0;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
         Node* temp = new Node(x);
    temp->next = top;
    top=temp;
    sizei++;
    }

    void pop() {
        // Removes the top element of the stack
        Node*temp = top;
    top=top->next;
    delete temp;
    sizei--;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(sizei==0)return -1;
          return top->data;
    }

    int size() {
        // Returns the current size of the stack.
         return sizei;
    }
};