#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); //biar tiap di cin, dia nyambung, base(depan =0)

    int n;
    string perintah, kode, judul;
    vector<string>kod;//bikin RUANG buat naruh bernama kod
    vector<string>jud;//bikin RUANG buat naruh bernama jud
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>perintah;
        if(perintah=="T"){
            cin>>kode>>judul;
            kod.push_back(kode);
            jud.push_back(judul);
        }else if(perintah=="A" && kod.size()>0){//base(depan>0)
            kod.erase(kod.end()-1,kod.end());//depan--
            jud.erase(jud.end()-1,jud.end());//depan--
        }
    }
    for (int i=kod.size()-1; i>=0; i--){//kod.size()-1 = 0-1 = -1
        cout << kod[i] << ' ' << jud[i] << "\n";
    }
}
