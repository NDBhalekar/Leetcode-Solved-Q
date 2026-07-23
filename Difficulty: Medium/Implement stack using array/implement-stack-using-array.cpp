class myStack {
  public:
  int *arr;//arr is a pointer to int,It will store the address of an array,In our case, size (capacity) is decided at runtime 
int capacity;
int topIdx;
  
    myStack(int n) {
        // Define Data Structures
         capacity = n;
    arr = new int[capacity];//we created array dynamically at runtime
    topIdx=-1;
    }

    bool isEmpty() {
        // check if the stack is empty
        return topIdx==-1;
    }

    bool isFull() {
        // check if the stack is full
         return topIdx==capacity-1;
        
    }

    void push(int x) {
        // inserts x at the top of the stack
         if(topIdx == capacity-1){
        // cout<<"stack overflow"<<endl;
        return;
    }
    topIdx++;
    arr[topIdx]= x;
    }

    void pop() {
        // removes an element from the top of the stack
        if(topIdx==-1){
        // cout<<"Stack underflow"<<endl;
        return;
    }
    topIdx--;
    }

    int peek() {
        // Returns the top element of the stack
          if(topIdx == -1){
    // cout<<"stack is empty"<<endl; 
    return -1;
   }
   return arr[topIdx];
    }
};