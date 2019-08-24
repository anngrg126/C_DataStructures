#include <stdio.h>
#include <stdlib.h>


struct binaryTreeNode{
    int data;
    struct binaryTreeNode *left;
    struct binaryTreeNode *right;
};

// adding a function to create a node
struct binaryTreeNode *createTreeNode(int data){

    struct binaryTreeNode *temp =  malloc(sizeof(struct binaryTreeNode));
    if (!temp)
        return NULL;

    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

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

    struct binaryTreeNode *R = createTreeNode(1);
    R->left = createTreeNode(2);
    R->right = createTreeNode(3);

    R->left->left = createTreeNode(4);
    R->left->right = createTreeNode(5);

    R->right->left = createTreeNode(6);
    R->right->right = createTreeNode(7);

    preorderRecursive(R);

    return 0;


}
