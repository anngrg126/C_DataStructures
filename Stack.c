#include <stdio.h>

// data type for a structure
struct ArrayStack{
    int size;
    int top;
    int *arr;
};

struct ArrayStack *createStack(){
    struct ArrayStack *S = malloc(sizeof(struct ArrayStack));
    if (!S)
        return NULL;
    S->size = 1;
    S->top = -1;
    S->arr = malloc(S->size * sizeof(int));
    if (!S->arr)
        return NULL;
    return S;
};

int isEmpty(struct ArrayStack *X)
{
    if (X->top == -1)
        return 1;
    else
        return 0;
}

// function to push into the stack
void pushInStack(struct ArrayStack *X, int item)
{
        //top value will increase
//        X->top++;
        X->arr[++X->top] = item;
        return;
}


// function to pop from the stack
int popFromStack(struct ArrayStack *X)
{
    int item = X->arr[X->top--];
    printf("\n\nitem is %d", item);
  //  X->top--;
    return item;
}

// function to display the elements of the stack



void main(void){
    struct ArrayStack *N = createStack();
    printf("\n\nisEmpty() returned %d", isEmpty(N));
    pushInStack(N, 5);
    printf("\n\nisEmpty() returned %d", isEmpty(N));
    printf("\n\nThe topmost item of the stack is %d\n\n", (popFromStack(N)));

    if(N){
        if (N->arr)
            free(N->arr);
        free(N);
    }

    return;
    }
