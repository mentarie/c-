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
void cek(node *r, int n, int x){
    int arr[100];
    bool s= true;
    if(r != std::end(arr)){
        if(){
            cout<<"YA"<<endl;
        }
    }
}

int main(){
    tree T;
    newTree(T.r);

    int n, arr[100], x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        insert(T.r,arr[i]);
    }
    cin>>x;
    cek(T.r,n,x);
}
