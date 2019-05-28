#include <bits/stdc++.h>
using namespace std;

void cari(int a, int *data){//data dibawa pakai pointer karena dia bisa berubah klo dikirim ke main
    //pakai boolean tanda kalau ketemu juga boleh
    bool ketemu;
    for(int i=0;i<10;i++){//sudah ditentukan ada 10 data
        if(data[i]==a){
            ketemu=true;
            cout<<a<<" ditemukan di index ke "<<i<<endl;
        }
    }
    if(ketemu=false){
        cout<<a<<" tidak ditemukan"<<endl;
    }
}

int main(){
    int a;
    int data[] = {10, 12, 1, 83, 89, 23, 5, 24, 14, 19};
    cin >> a;
    cari(a, data);
    return 0;
}
