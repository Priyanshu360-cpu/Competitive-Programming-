#include <iostream>
using namespace std;
	struct node{
	    int info;
	    struct node* left;
	    struct node*right;
	};
	struct node* add(int data) {
	    struct node* node=(struct node*)malloc(sizeof(struct node));
	    node->info=data;
	    node->left=NULL;
	    node->right=NULL;
	    return node;
	};
int main() {
	struct node* main=add(3);
	main->left=add(4);
	main->right=add(5);
	
	return 0;
}
