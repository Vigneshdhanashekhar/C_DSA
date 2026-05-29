#include<stdio.h>
#include"../BinaryTree.h"
// Node* insert_tree(Node *node,int value){
//     node=createNode(value);
//     if (node==NULL){
//         return NULL;
//     }
//     node->val=value;
//     int leftval,rightval;
    
//     printf("Enter the value for Left side Node of %d[0 if no node]",node->val);
//     scanf("%d",&leftval);
//     if (leftval==0)
//     {
//         return(NULL);
//     }
//     node->left=insert_tree(node->left,leftval);

//     printf("Enter the value for Right side Node of %d[0 if no node]",node->val);
//     scanf("%d",&rightval);
//     if (rightval==0)
//     {
//         return(NULL);
//     }
//     node->right=insert_tree(node->right,rightval);
// }

int main(){
    Node *root=NULL;
    root=insert_tree(root,0);
}