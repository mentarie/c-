#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int x; //masukkin semua data
    long long int y; //masukin data yg mau kamu cari
    map<int,long long>searchmap;//kenapa pakai map?nampung data cari
    int counter=0;

    while(cin>>x){
        if (x<=0) {
            break;
        }else{
            searchmap[x]++;//nampung data cari sekaligus njumplahin ada berapa data dengan angka x
        }
    }
    cin>>y;
    cout<<searchmap[y]<<endl;
}
