#include <stdio.h>
#include <stdlib.h>


struct binaryTreeNode{
    int data;
    struct binaryTreeNode *left;
    struct binaryTreeNode *right;
};

// adding a function to create a node
struct binaryTreeNode *createTreeNode(){

    struct binaryTreeNode *temp =  malloc(sizeof(struct binaryTreeNode));
    if (!temp)
        return NULL;

    return temp;
};

//This failed; as there is no exit condition for recursive function
void preorderRecursive(struct binaryTreeNode *root){
    if(root){
        printf("%d\n", root->data);
        preorderRecursive(root->left);
        preorderRecursive(root->right);
    }
}




void main(){

    struct binaryTreeNode *R = createTreeNode();
    struct binaryTreeNode *RL = createTreeNode();
    struct binaryTreeNode *RR = createTreeNode();
    struct binaryTreeNode *RLL = createTreeNode();
    struct binaryTreeNode *RLR = createTreeNode();
    struct binaryTreeNode *RRL = createTreeNode();
    struct binaryTreeNode *RRR = createTreeNode();

    R->data = 1;
    R->left = RL;
    R->right = RR;

    printf("%d\n", R->data);
    printf("Ann\n");


    RL->data = 2;
    RL->left = RLL;
    RL->right = RLR;

    RR->data = 3;
    RR->left = RRL;
    RR->right = RRR;

    RLL->data = 4;
    RLL->left = NULL;
    RLL->right = NULL;

    RLR->data = 5;
    RLR->left = NULL;
    RLR->right = NULL;

    RRL->data = 6;
    RRL->left = NULL;
    RRL->right = NULL;

    RRR->data = 7;
    RRR->left = NULL;
    RRR->right = NULL;

    preorderRecursive(R);

    return 0;


}
