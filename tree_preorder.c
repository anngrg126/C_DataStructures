#include <stdio.h>
#include <stdlib.h>


struct binaryTreeNode{
    int data;
    struct binaryTreeNode *left;
    struct binaryTreeNode *right;
};


void preorderRecursive(struct binaryTreeNode *root){
    if(root){
        printf("%d", root->data);
        preorderRecursive(root->left);
        preorderRecursive(root->right);
    }
}


void preorderNonRecursive(struct binaryTreeNode *root){
 struct stack *S = createStack();
 while(1){
    while(root){
        // Process current node
        printf("%d", root->data);
        Push(S, root);
        root = root->left;
    }
        if(isEmptyStack(S))
            break;

        root = root->right;
 }
 DeleteStack(S);
 }
}
