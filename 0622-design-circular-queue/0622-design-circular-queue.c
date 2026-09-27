


typedef struct {
int f;
int r;
int capacity;
int size;
int *arr;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue*q=(MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    q->arr=(int*)malloc(k*sizeof(int));
    q->f=0;
    q->r=-1;
    q->size=0;
    q->capacity=k;

    return q;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
if(obj->size==obj->capacity){
    return false;
}
else{
    obj->r=(obj->r+1)%obj->capacity;
    obj->arr[obj->r]=value;
    obj->size++;
}
return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(obj->size==0){
        return false;; 
    }
    else{
      obj->f = (obj->f+1)%obj->capacity;
      obj->size--;
    }
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if(obj->size==0){
        return -1;
    }
    return obj->arr[obj->f];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if(obj->size==0){
        return -1;
    }
    return obj->arr[obj->r];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->size==0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return obj->size==obj->capacity;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/