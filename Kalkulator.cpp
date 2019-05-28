#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string perintah;
    cin>>a>>perintah>>b;
    if(perintah=="tambah"){
        cout<<a+b<<endl;
    }else if(perintah=="kurang"){
        cout<<a-b<<endl;
    }else if(perintah=="kali"){
        cout<<a*b<<endl;
    }else if(perintah=="bagi"){
        cout<<a/b<<" sisa "<<a%b<<endl;
    }
}
