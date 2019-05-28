#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); //biar tiap di cin, dia nyambung

    int x, syarat, nilai, sum=0;
    vector<int>kolom;//bikin RUANG buat naruh bernama kolom
    cin>>x;

    for(int i=0;i<x;i++){
        cin>>syarat;
        if(syarat==0){//masuk belakang
            cin>>nilai;
            kolom.push_back(nilai);
        }else if(syarat==1){//masuk depan
            cin>>nilai;
            kolom.insert(kolom.begin(),nilai);
        }else if(syarat==2){//ambil belakang
            cin>>nilai;
            kolom.erase(kolom.end()-1, kolom.end());
        }else if(syarat==3){//ambil depan
            cin>>nilai;
            kolom.erase(kolom.begin(), kolom.begin()+1);
        }
    }
    for (int i=0; i<kolom.size(); i++){
        sum+=kolom[i];
    }

    cout << sum << "\n";
}
