#include <stdio.h>
#include <stdlib.h>


struct listNode {
    int data;
    struct listNode *next;
};


int listLenght(struct listNode *head){

    struct listNode *current = head;
    int count = 0;

    while(current != NULL){
        count++;
        current = current->next;
    }

    return count;
}

void insertElem(struct listNode **head, int data, int pos){
//if pos is 1, then insert at the beginning
    struct listNode *p, *q, *newNode;

    struct listNode *newNode = malloc(sizeof(struct listNode));
    if (!listNode)
        return NULL;

    newNode -> data = data;

    p = *head;
    int k = 1;
    if (pos == 1)
    {
        newNode->next = p;
        *head = newNode;
    }else{
    // keep traversing until we reach the position that we
    // want to insert the node in.
        while(p!=NULL)&&(k<pos){
        k++;
        q = p;
        p = p->next;
        }
        newNode->next = p;
        q->next = newNode;
    }
}


void deleteElem(struct listNode **head, int pos){
    int k = 1;
    struct listNode *p, *q;

    if (*head == NULL){
        printf("\n\nList is Empty");
        return;
    }

    p = *head;

    // if the first element is to be deleted
    if (pos == 1){
        *head = *head->next;
        free(p);
    }else{
        while(p!=NULL)&&(k<pos){
            ++k;
            q=p;
            p=p->next;
        }
    q->next = p->next;
    free(p);
    }
}

void deleteList(struct listNode **head){
    struct listNode *auxNode, *iter;

    iter = *head;
    while(iter){
        auxNode = iter->next;
        free(iter);
        iter = auxNode;
    }
    *head = NULL;
}



void main()
{
    struct listNode *p_1st = NULL;
    printf("The length of list is %d", listLenght(p_1st));



    return 0;
}
