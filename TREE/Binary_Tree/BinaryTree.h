#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int val;
    struct Node *left,*right;
}Node;

Node *createNode(int value){
    Node *newNode=(Node *)malloc(sizeof(Node *));
    if(newNode==NULL){
        return(NULL);
    }
    newNode->val=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return(newNode);
}
Node* insert_tree(Node *node,int value){
    node=createNode(value);
    if (node==NULL){
        return NULL;
    }
    // node->val=value;
    int leftval,rightval;
    
    printf("Enter the value for Left side Node of %d[0 if no node]",node->val);
    scanf("%d",&leftval);
    if (leftval!=0)
    {
       node->left=insert_tree(node->left,leftval);
    }
    printf("Enter the value for Right side Node of %d[0 if no node]",node->val);
    scanf("%d",&rightval);
    if (rightval!=0)
    {
        node->right=insert_tree(node->right,rightval);
    }
    return(node);
}

void inorder_traverse(Node *node){
    if(!node){
        return;
    }
    inorder_traverse(node->left);
    printf("\nAt Node: %d",node->val);
    inorder_traverse(node->right);
}

void preorder_traverse(Node *node){
    if(!node){
        return;
    }
    printf("\nAt Node: %d",node->val);
    preorder_traverse(node->left);
    preorder_traverse(node->right);
}

void postorder_traverse(Node *node){
    if(!node){
        return;
    }
    
    postorder_traverse(node->left);
    postorder_traverse(node->right);
    printf("\nAt Node: %d",node->val);
}