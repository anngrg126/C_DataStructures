#include <stdio.h>
#include <stdlib.h>


struct dynStack {
    int top;
    int size;
    int *dynArr;
};



struct dynStack *createDynStack(){

    struct dynStack *dS = malloc(sizeof(struct dynStack));
    if (!dS)
        return NULL;

    dS->top = -1;
    dS->size = 1;

    dS->dynArr = malloc(dS->size * sizeof(int));
    if (!dS->dynArr)
        return NULL;

    return dS;
};

int isEmpty(struct dynStack *X){

    if (X->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct dynStack *X){
    if (X->size-1 == X->top)
        return 1;
    else
        return 0;
}

void pushStack(struct dynStack *X, int item){
    // if stack full; printf cannot push; doubling capacity and then pushing;
    if (isFull(X)){
        printf("Stack full, cannot push, doubling capacity");
        X->size = X->size * 2;
        X->dynArr = realloc(X->dynArr, X->size);
    }
    X->dynArr[++X->top] = item;
    return;
}

int popStack (struct dynStack *X){
    // if the stack is empty, cannot pop
    if (isEmpty(X))
        printf("Stack is empty, cannot pop");
    else
        return X->dynArr[X->top--];

}


void main(){

    struct dynStack *dN = createDynStack();

    popStack(dN);

    printf("\n\nThe response of isEmpty is %d", isEmpty(dN));
    printf("\n\nThe response of isFull is %d", isFull(dN));

    pushStack(dN, 5);
    printf("\n\nThe response of isEmpty is %d", isEmpty(dN));
    printf("\n\nThe response of isFull is %d", isFull(dN));
    pushStack(dN, 8);


    return;

}
