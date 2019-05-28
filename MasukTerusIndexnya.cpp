#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long x; //masukkin semua data
    long long y; //masukin data yg mau kamu cari
    vector<long long>kolom;

    while(cin>>x){
        kolom.push_back(x);//masukkan data x ke arraynya
        if (x<=0) {break;}
    }
    cin>>y;
    y=y-1;//karena array kan dimulai dari nol :)
    cout<<kolom[y]<<endl;
}
