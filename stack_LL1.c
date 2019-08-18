//implementing stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct stackElem {
    int data;
    struct stackElem *next;
};

struct stackElem *createStackElem(){
    // do not assign any data value or next pointer, just reserve pointer space for the stackElemNode
    struct stackElem *temp = malloc(sizeof(struct stackElem));
    if (!temp)
        return NULL;

    return temp;
};


void pushStack(struct stackElem **x, int data){

    struct stackElem *temp = malloc(sizeof(struct stackElem));
    if (!temp)
        return NULL;
    printf("\n\nThe value of temp is %p", temp);

    //*x is the address of the first element of stack
//    *x->data = data;
// if it is the first element, then ->next will be null;

    printf("\n\nThe value of *x is %p", *x);


    if (*x == NULL){
        printf("\n\nTest1");
        temp->data = data;
        printf("\n\nTest2");
        temp->next = NULL;
        printf("\n\nTest3");
        *x = temp;
        printf("\n\nTest4");
    }


    printf("\n\nTest5");
    temp->data = data;
    printf("\n\nTest6");
    temp->next = *x;
    printf("\n\nTest7");
    *x = temp;
    printf("\n\nTest8");

    return;

}


void popStack(struct stackElem **x){

    // if empty
    // printf "cannot pop from empty stack"

    struct stackElem *temp;

    temp = *x;

    *x = (*x)->next;
    free(temp);
}


int isEmpty(struct stackElem **x){

    if (*x==NULL)
        return 1;
    else
        return 0;
}


void main(){

//    struct stackElem *p_1st = createStackElem();
    struct stackElem *p_1st = NULL;
    printf("\n\nThe value of &p_1st is %p", &p_1st);

    printf("\n\nThe response of is stack empty is %d", isEmpty(&p_1st));

    pushStack(&p_1st, 5);
    printf("\n\nThe value of top elem data is %d", p_1st->data);


    pushStack(&p_1st, 8);
    printf("\n\nThe value of top elem data is %d", p_1st->data);

    printf("\n\nThe response of is stack empty is %d", isEmpty(&p_1st));


    pushStack(&p_1st, 9);
    printf("\n\nThe value of top elem data is %d", p_1st->data);


    popStack(&p_1st);
    printf("\n\nThe value of top elem data is %d", p_1st->data);



    return 0;
}
