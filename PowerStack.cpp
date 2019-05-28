#include <bits/stdc++.h>
using namespace std;

//STACK
//buat inisialisasi RUANG stacknya
//buat create stacknya(berapa ISI awalnya stack)
//boleh juga langsung pakai variabel global untuk RUANG dan ISI
int stackAngka[100], top=-1;

//show
void show(){
    cout<<"[ ";
    for(int i=0;i<=top;i++){
        cout<<stackAngka[i]<<" ";
    }
    cout<<"]"<<endl;
}

//isEmpty
bool isEmpty(){
    // ini fungsi buat ngecek stack kosong atau tidak
    if (top==-1){ //kalo top == -1 berarti kosong
        return true;
    } else return false;
}
//isFull (opsional)

//buat push
void push(int a){
    top++;
    stackAngka[top]=a;
    show();
}
//buat powpush
void powpush(int b, int a){
    for(int i=0;i<b;i++){
        top++;
        stackAngka[top]=a;
    }
    show();
}
//buat pop
void pop(){
    //harus cek dulu apakah dia empty/tidak
    if(isEmpty()){
        cout<<"ERROR: STACK KOSONG"<<endl;
    }else{
        top--;
        show();
    }
}
//buat powpop
void powpop(int b){
    //harus cek dulu apakah dia empty/tidak
    for(int i=0;i<b;i++){
        if(top==-1){//udah sampai batas RUANG
            cout<<"ERROR: STACK KOSONG"<<endl;
        }else{
            top--;
        }
    }
    if (!isEmpty()){
        show();
    }
}
//main
int main(){
    int x,a,b;
    string perintah;
    cin>>x;

    for(int i=0;i<x;i++){
        cin>>perintah;
        if(perintah=="PUSH"){
            cin>>a;
            push(a);
        }else if(perintah=="POP"){
            pop();
        }else if(perintah=="POWPUSH"){
            cin>>b>>a;
            powpush(b,a);
        }else if(perintah=="POWPOP"){
            cin>>b;
            powpop(b);
        }
    }
}
