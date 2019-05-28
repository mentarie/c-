#include <bits/stdc++.h>
using namespace std;

//LINKED LIST DOUBLE INPUT

//deklarasi uang
typedef struct(){
    int data[1000]={0};
    int depan;
}Queque;
//deklarasi taruhdepan
void taruhdepan(Queque &q, int koin){
    q.depan=q.depan+1;
    q.data[q.depan]=koin;
}
//deklarasi taruhbelakang
void taruhbelakang(Queque &q,int koin){
    if(q.depan> -1){
        q.depan=q.depan+1;
        //biar bisa mundur masukkinnya
        for(int i=q.depan;i>0;i--){
            /*a.data[0]=a.data[1];
            q.data[1]=q.data[2];
            q.data[2]=q.data[3];*/
            q.data[i]=q.data[i-1];
        }
        q.data[0]=koin;
    }else{
        taruhdepan(q,koin);
    }
}
//deklarasi fungsi ambil depan
void ambildepan(Queque &q){
    q.data[q.depan]= 0;
    q.depan --;
}
//deklarasi ungsi ambil belakang
void ambilbelakang(Queque &q){
    for(int i=0;i<q.depan;i++){
        /*a.data[0]=a.data[1];
        a.data[1]=a.data[2];
        a.data[2]=a.data[3];*/
        q.data[i]=q.data[i+1];
    }
    q.depan=q.depan-1;
}
//main program
int main(){
    int n;
    cin>>n;
    string perintah;
    int koin;
    Queque q;
    q.depan=-1;

    for(int i=0;i<n;i++){
        cin>>perintah>>koin;
        if(perintah=="0"){
            taruhbelakang(q,koin);
        }else if(perintah=="1"){
            taruhdepan(q,koin);
        }else if(perintah=="2"){
            ambildepan(q);
        }else if(perintah=="3"){
            ambilbelakang(q);
        }
    }
    cout<<jumlahTabungan(q);
}

