#include <stdio.h>
#include <stdlib.h>


struct arrayQueue {
    int front, rear;
    int capacity;
    int *arr;
};


struct arrayQueue *createQueue(int size){

    struct arrayQueue *Q = malloc(sizeof(struct arrayQueue));
    if (!Q)
        return NULL;

        // initially both front and rear are -1 which indicates the queue is empty
    Q->front = -1;
    Q->rear = -1;
    Q->capacity = size;

    Q->arr = malloc(Q->capacity * sizeof(int));
    if (!Q->arr)
        return NULL;

    return Q;
};


int isQueueEmpty(struct arrayQueue *X){
    // if the condition is true then 1 is returned else 0 is returned
    return (X->front == -1)
}

void enQueue(struct arrayQueue *X, int item){
    if (isQueueFull(X))
        printf("Queue Overflow");
    else{
        X->rear = (X->rear+1)%(X->capacity)
        X->arr[X->rear] = data;
        if X->front == -1
            X->front = X->rear;
    }
}

int deQueue(struct arrayQueue *X){
    if (isQueueEmpty(X)){
        printf("Queue is empty");
        return 0;
    }
    else{
        data = X->arr[X->front];
        if (X->front == X->rear)
            X->front = X->rear = -1;
        else
            X->front = (X->front+1)%(X->capacity);
    }
return data;
}




