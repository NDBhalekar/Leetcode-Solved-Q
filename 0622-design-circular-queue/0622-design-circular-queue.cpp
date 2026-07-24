class MyCircularQueue {
public:
    int *arr;
    int front,rare;
    int currsize;
    int size;
    MyCircularQueue(int k) {
        size= k;
        currsize =0;
        arr = new int[size];/***/
        front = 0;
        rare =-1;
    }
    
    bool enQueue(int value) {
        if(currsize==size){
            return false;
        }
        rare = (rare+1)%size;
        arr[rare]=value;
        currsize++;
        return true;
    }
    
    bool deQueue() {
        if(currsize==0){
            return false;
        }
        front = (front+1)%size;
        currsize--;
        return true;
    }
    
    int Front() {
        if(currsize==0){
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(currsize==0){
            return -1;
        }
        return arr[rare];
    }
    bool isEmpty() {
        return currsize==0;
    }
    
    bool isFull() {
        return currsize==size;
    }
};
