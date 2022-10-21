#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void search(struct node* root,int k){
    if(root==NULL)return;
    if(root->data==k){
        printf("Found");
        return;
    }
    search(root->left,k);
    search(root->right,k);
}
int smallest(struct node* root){
    if(root==NULL) return __INT_MAX__;
    int left=smallest(root->left);
    int right=smallest(root->right);
    int min=root->data;
    if(left<min) min=left;
    if(right<min) min=right;
    return min;
}
int largest(struct node* root){
    if(root==NULL) return 0;
    int left=largest(root->left);
    int right=largest(root->right);
    int max=root->data;
    if(left>max) max=left;
    if(right>max) max=right;
    return max;
}
void deleter(struct node* root){
    if(root==NULL) return;
    deleter(root->left);
    deleter(root->right);
    free(root);
}
int main(){
    struct node* root=create();
    while(1){
    printf("User Driven Program\n Press 1 to Quit\nPress 2 to Create\nPress 3 for Inorder Traversal\nPress 4 for PreOrder traversal\nPress 5 for PostOrder Traversal\nPress 6 for Searching\nPress 7 for Smallest Element\nPress 8 for Largest Element\nPress 9 for Deletion\n");
    int g;
    scanf("%d",&g);
    switch(g){
        case 1:
            exit(0);
        case 2:
            root->left=create();
            root->right=create();
        case 3:
            printf("Inorder Traversal:");
            inorder(root);
            printf("\n");
            break;
        case 4:
            printf("PreOrder Traversal:");
            preorder(root);
            printf("\n");
            break;
        case 5:
            printf("PostOrder Traversal:");
            postorder(root);
            printf("\n");
            break;
        case 6:
            printf("Enter the element to be searched:");
            int k;
            scanf("%d",&k);
            search(root,k);
            printf("\n");
            break;
        case 7:
            printf("Smallest Element:%d",smallest(root));
            printf("\n");
            break;
        case 8:
            printf("Largest Element:%d",largest(root));
            printf("\n");
            break;
        case 9:
            deleter(root);
            printf("Deletion Successful");
            printf("\n");
            break;
        default:
        printf("Error value\n");
    }
    }
}
