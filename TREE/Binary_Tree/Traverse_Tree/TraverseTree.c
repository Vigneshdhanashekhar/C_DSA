#include<stdio.h>
#include"../BinaryTree.h"

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
int main(){
    Node *root=NULL;
    root=insert_tree(root,1);
    printf("\n\n\nPreorder Traverse\n");
    preorder_traverse(root);
    printf("\n\n\nInorder Traverse\n");
    inorder_traverse(root);
    printf("\n\n\nPostorder Traverse\n");
    postorder_traverse(root);
}