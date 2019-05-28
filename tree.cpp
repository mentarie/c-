#include <iostream>
using namespace std;
// buat stuctnya sampai siap
struct node {
	int angka;
	node *left;
	node *right;
};
struct Tree{
	node *root;

};
void createTree(node *&r){
	r=NULL;
}

void insert(node *&r, int x){
	if(r == NULL){
		node *baru = new node;
		baru->left = NULL;
		baru->right = NULL;
		baru->angka = x;
		r = baru;
	}else{
		if(x > r->angka){
			insert(r->right, x);
		}else{
			insert(r->left, x);
		}
	}
}

void showPreOrder(node *r){
	if(r!=NULL){
		cout<<r->angka<<endl;
		showPreOrder(r->left);
		showPreOrder(r->right);
	}
}

void showInOrder(node *r){
	if(r!=NULL){
		showInOrder(r->left);
		cout<<r->angka<<endl;
		showInOrder(r->right);
	}
}

void showPostOrder(node *r){
	if(r!=NULL){
		showPostOrder(r->left);
		showPostOrder(r->right);
		cout<<r->angka<<endl;
    }
}
bool cariNode(node *r, int x){
	if(r== NULL){
		return 0;
	}
	else if(r->angka==x){
		return 1;
	}
	else{
		return cariNode(r->left , x) || cariNode(r->right, x);
	}
}

node *getNode(node *r, int x){
	if(r==NULL){
		return NULL;
	}
	else if(r->angka==x){
		return r;
	}else{
		getNode(r->left,x);
		getNode(r->right,x);
	}
}

node *getParent(node *r, int x){
	if(r==NULL){
		return NULL;
	}
	else if(r->left->angka==x || r->right->angka==x){
		return r;
	}
	else {
		getParent(r->left, x);
		getParent(r->right, x);
	}
}
int max(int a, int b){
	if(a>b){return a;}
	else {return b;}
}
int getTinggi(node *r){
	if(r==NULL){return 0;}
	else if(r->left==NULL && r->right==NULL){return 1;}
	else{
		return 1 + max(getTinggi(r->left), getTinggi(r->right));
	}
}
int getMin(node *r){
	if(r==NULL){
		return 0;
	}
	else if(r->left!=NULL){
		return r->angka;
	}
	else{
		return getMin(r->left);
	}
}

int getMax(node *r){
	if(r==NULL){
		return 0;
	}
	else if(r->right==NULL){
		return r->angka;
	}
	else{
		return getMax(r->right);
	}
}

int sumAllNode(node *r){
	if(r==NULL) return 0;
	return r->angka + sumAllNode(r->left) + sumAllNode(r->right);
}

int countNode(node *r){
	if(r == NULL){
		return 0;
	}else{
		return 1 + countNode(r->left) + countNode(r->right);
}}
int countGenap(node *r){
	if(r==NULL){
		return 0;
	}else if(r->angka%2==0){
		return 1 + countGenap(r->left) + countGenap(r->right);
	}else{
		return countGenap(r->left) + countGenap(r->right);
	}
}

int countGanjil(node *r){
	if(r==NULL){
		return 0;
	}else if(r->angka%2!=0){
		return 1 + countGanjil(r->left) + countGanjil(r->right);
	}else{
		return countGanjil(r->left) + countGanjil(r->right);
	}
}

int sumLeaf(node *r){
	if(r == NULL){
		return 0;
	}else if(r->left == NULL && r->right == NULL){
		return r->angka;
	}else{
		return sumLeaf(r->left) + sumLeaf(r->right);
	}
}

int countLeaf(node *r){
	if(r == NULL){
		return 0;
	}else if(r->left == NULL && r->right == NULL){
		return 1;
	}else{
		return countLeaf(r->left) + countLeaf(r->right);
	}
}

int countLeafGenap(node *r){
	if(r == NULL){
		return 0;
	}else if(r->left == NULL && r->right == NULL && r->angka%2==0){
		return 1;
	}else{
		return countLeafGenap(r->left) + countLeafGenap(r->right);
	}
}
int countLeafGanjil(node *r){
	if(r == NULL){
		return 0;
	}else if(r->left == NULL && r->right == NULL && r->angka%2!=0){
		return 1 + countLeafGanjil(r->left) + countLeafGanjil(r->right);
	}else{
		return countLeafGanjil(r->left) + countLeafGanjil(r->right);
	}
}

int countNode2Anak(node *r){
	if(r == NULL){
		return 0;
	}else if(r->left !=NULL && r->right != NULL){
		return 1 + countNode2Anak(r->left) + countNode2Anak(r->right);
	}
	return 0 + countNode2Anak(r->left) + countNode2Anak(r->right);
}

int countNode1Anak(node *r){
	if(r == NULL){
		return 0;
	}else if((r->left ==NULL && r->right != NULL)||(r->left !=NULL && r->right == NULL)){
		return 1 + countNode1Anak(r->left) + countNode1Anak(r->right);
	}
	return 0 + countNode1Anak(r->left) + countNode1Anak(r->right);
}

//buat Main untuk input dan menampilkan semua output semua fungsi
int main(){
	Tree T;
	createTree(T.root);
	//node r;
	int x;
	cin>>x;
	int num;
	for(int i=0;i<x;i++){
		cin>>num;
		insert(T.root,num);
	}

	cout<<"countNode1Anak="<<countNode1Anak(T.root)<<endl;
	cout<<"countNode2Anak="<<countNode2Anak(T.root)<<endl;
	cout<<"countLeafGanjil"<<countLeafGanjil(T.root)<<endl;
	cout<<"countLeafGenap"<<countLeafGenap(T.root)<<endl;
	cout<<"countLeaf"<<countLeaf(T.root)<<endl;
	cout<<"sumLeaf"<<sumLeaf(T.root)<<endl;
	cout<<"countGanjil"<<countGanjil(T.root)<<endl;
	cout<<"countGenap"<<countGenap(T.root)<<endl;
	cout<<"countNode"<<countNode(T.root)<<endl;
	cout<<"sumAllNode"<<sumAllNode(T.root)<<endl;
	cout<<"getMax"<<getMax(T.root)<<endl;
	cout<<"getMin"<<getMin(T.root)<<endl;
	cout<<"getTinggi"<<getTinggi(T.root)<<endl;
	cout<<"cariNode"<<cariNode(T.root,5)<<endl;
	cout<<"getNode"<<getNode(T.root,5)<<endl;
	cout<<"getParent"<<getParent(T.root,5)<<endl;
	showPostOrder(T.root);
	showInOrder(T.root);
	showPreOrder(T.root);
    return 0;
}
