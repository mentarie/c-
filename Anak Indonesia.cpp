#include <iostream>
using namespace std;

struct node{
    int angka;
    string nama;
    node *left;
    node *right;
};
struct tree{
    node *r;
};
void newTree(node *&r){
    r = NULL;
}
void insert(node *&r, int a, string nama){
    if(r==NULL){
        node *baru = new node;
        baru->angka = a;
        baru->nama = nama;
        baru->left = NULL;
        baru->right = NULL;
        r = baru;
    }else{
        if(a>r->angka){
            insert(r->right,a,nama);
        }else{
            insert(r->left,a,nama);
        }
    }
}
void showPreOrder(node *r){
	if(r!=NULL){
		cout<<r->nama<<" ";
		showPreOrder(r->left);
		showPreOrder(r->right);
	}
}
void showInOrder(node *r){
    if(r != NULL){
        showInOrder(r->left);
        cout<<r->nama<<" ";
        showInOrder(r->right);
    }
}
void showPostOrder(node *r){
    if(r != NULL){
        showPostOrder(r->left);
        showPostOrder(r->right);
        cout<<r->nama<<" ";
    }
}
int main(){
    tree T;
	newTree(T.r);
	int x,num;
	cin>>x;
	string nama;
	for(int i=0;i<x;i++){
        cin>>nama>>num;
		insert(T.r,num,nama);
	}
	showPostOrder(T.r);cout<<endl;
	showPreOrder(T.r);cout<<endl;
	showInOrder(T.r);cout<<endl;
}
