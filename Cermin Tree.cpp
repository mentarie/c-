#include <iostream>
using namespace std;

struct node{
    int angka;
    node *left;
    node *right;
};
struct tree{
    node *r;
};
void newTree(node *&r){
    r = NULL;
}
void insert(node *&r, int a){
    if(r==NULL){
        node *baru = new node;
        baru->angka = a;
        baru->left = NULL;
        baru->right = NULL;
        r = baru;
    }else{
        if(a!=r->angka){
            if(a<r->angka){
                insert(r->right,a);
            }else if(a>r->angka){
                insert(r->left,a);
            }
        }
    }
}
void showPreOrder(node *r){
    if(r != NULL){
        cout<<r->angka<<" ";
        showPreOrder(r->left);
        showPreOrder(r->right);
    }
}
void showInOrder(node *r){
    if(r != NULL){
        showInOrder(r->left);
        cout<<r->angka<<" ";
        showInOrder(r->right);
    }
}
void showPostOrder(node *r){
    if(r != NULL){
        showPostOrder(r->left);
        showPostOrder(r->right);
        cout<<r->angka<<" ";
    }
}
int main(){
    tree T;
	newTree(T.r);
	int x;
	cin>>x;
	int num;
	for(int i=0;i<x;i++){
		cin>>num;
		insert(T.r,num);
	}
	showPreOrder(T.r);cout<<endl;
	showInOrder(T.r);cout<<endl;
	showPostOrder(T.r);cout<<endl;
}
