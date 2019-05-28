#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,pengubah,c;
    cin>>a>>b>>pengubah;
    //bikin for buat ngecek per hurufnya
    for(int i=0;i<a.length();i++){
        if(pengubah[i]=='0'){//kalau dia nemuin angka 0
            c=c+a[i];//si c jadi masuk hurufnya a
        }else if(pengubah[i]=='1'){//kalau dia nemuin angka 1
            c=c+b[i];//si c jadi masuk hurufnya b
        }
    }
    cout<<c<<endl;
}
