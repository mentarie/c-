#include <bits/stdc++.h>
using namespace std;

struct node{
    int angka;
    node *left;
    node *right;

};

struct tree{
    node *root;
};

void newTree(node *&r){
    r = NULL;
}
void insert(node *&r, int a){//java void insert(Node r, int a){
    if(r==NULL){            //if(r==NULL){
        node *baru = new node;//Node baru = new Node();
        baru->angka=a;      //baru.setAngka(a);
        baru->left=NULL;    //
        baru->right=NULL;   //
        r=baru;             //r= baru;
    }                       //
    else{
        if(a>r->angka){     //if(
            insert(r->right,a);}
        else{
            insert(r->left,a);
        }
    }
}


int getMax(node *r){
    if(r==NULL){
        return -1;
    }
    else if(r->right==NULL) {
        return r->angka;
    }else{
        return getMax(r->right);
    }
}


node *getNode(node *r, int x){
    if(r==NULL){
        return NULL;
    }else if(r->angka == x ){
        return r;
    }else {
        if(x>r->angka){
            return getNode(r->right,x);
        }
        else{
            return getNode(r->left,x);
        }
    }
}

int cariDeleteNode(node *r, int data){
    if(r==NULL){
        return -1;
    }else if(data==r->angka){
        return getMax(r->left);
    }else if(data>r->angka){
        cariDeleteNode(r->right,data);
    }else if(data<r->angka){
        cariDeleteNode(r->left,data);
    }
}

int main(){
    tree T;
    node r;
    newTree(T.root);
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        insert(T.root,num);
    }
    int x;
    cin>>x;
    cout<<cariDeleteNode(T.root,x)<<endl;
}
