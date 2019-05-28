#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string keluar,mor,nam;
    vector<string>nomor;
    vector<string>nama;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>mor>>nam;
        nomor.push_back(mor);
        nama.push_back(nam);
    }
    cin>>keluar;
    for(int i=0;i<n;i++){
        if(nomor[i]==keluar){
            cout<<"langsung bayar"<<endl;
        }else{
            break;
        }
    }
    for(int j=nomor.size()-1; j>=0; j--){
        if(nomor[j]<keluar){
            cout<<nama[j]<<endl;
        }
    }
}

