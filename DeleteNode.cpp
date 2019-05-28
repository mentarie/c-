#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

struct node
{
	int key;
	struct node *left, *right;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void preorder(struct node *root)
{
	if (root != NULL)
	{
	    printf("%d ", root->key);
		preorder(root->left);
		preorder(root->right);
	}
}

struct node* insert(struct node* node, int key)
{
	if (node == NULL) return newNode(key);

	if (key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);
	return node;
}
//cari pengganti
struct node * minValueNode(struct node* node)
{
	struct node* current = node;
	while (current && current->right != NULL)
		current = current->right;
	return current;
}
struct node* deleteNode(struct node* root, int key)
{
	if (root == NULL) return root;
	if (key < root->key)
		root->left = deleteNode(root->left, key);
	else if (key > root->key)
		root->right = deleteNode(root->right, key);
	else
	{
		if (root->left == NULL)
		{
			struct node *temp = root->right;
			return temp;
		}
		else if (root->right == NULL)
		{
			struct node *temp = root->left;
			return temp;
		}

		struct node* temp = minValueNode(root->left);
		root->key = temp->key;
		root->left = deleteNode(root->left, temp->key);
	}
	return root;
}

int main()
{
	struct node *root = NULL;
	int x,num,d;
	cin>>x;
	for(int i=0;i<x;i++){
        cin>>num;
		root=insert(root,num);
	}
    cin>>d;
    root=deleteNode(root, d);
    preorder(root);
    //input 8 9 4 6 5 2 1 3 7
    //preorder : 8 4 2 1 3 6 5 7 9
    //hapus 1 -> 8 4 2 3 6 5 7 9 (tidak ada pengganti)
    //hapus 6 -> 8 4 2 1 3 5 7 9 (5 jadi pengganti karena terbesar dari kiri)
    //hapus 8 -> 7 4 2 1 3 6 5 9 (7 jadi pengganti karena terbesar dari kiri)
}

