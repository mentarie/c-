#include <bits/stdc++.h>
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
        if(a>r->angka){
            insert(r->right,a);
        }else{
            insert(r->left,a);
        }
    }
}

void showInOrder(node *r){
    if(r != NULL){
        showInOrder(r->left);
        cout<<r->angka<<endl;
        showInOrder(r->right);
    }
}

int main(){
    tree T;
    newTree(T.r);

    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        insert(T.r,arr[i]);
    }
    showInOrder(T.r);
}
