#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node *left,*right;
}Node;

Node *createNode(int value){
    Node *newNode=(Node *)malloc(sizeof(Node));
    if(newNode==NULL){
        return(NULL);
    }
    newNode->val=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return(newNode);
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
Node* InstertBSTNode(Node *node,int value){
    if(node==NULL){
        return(createNode(value));
    }
    if(value<node->val){
        if (node->left == NULL)   // ✅ actual parent found
            printf("\nNode[%d]'s Parent is %d. Added as left child node", value, node->val);
        node->left=InstertBSTNode(node->left,value);
    }
    else if(value>node->val){
        if (node->right == NULL)  // ✅ actual parent found
            printf("\nNode[%d]'s Parent is %d. Added as Right child node", value, node->val);
        node->right=InstertBSTNode(node->right,value);
    }
    else
        printf("Duplicate value %d ignored.\n", value);
    return node; 
}
int main(){
    int num=0;
    Node *root=NULL;
    printf("\nEnter the number of nodes");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("\nEnter the Node's Value: ");
        int val;
        scanf("%d",&val);
        root=InstertBSTNode(root,val);
    }
    printf("\n\n\nPreorder Traverse\n");
    preorder_traverse(root);
    printf("\n\n\nInorder Traverse\n");
    inorder_traverse(root);
    printf("\n\n\nPostorder Traverse\n");
    postorder_traverse(root);
}