#include <bits/stdc++.h>
using namespace std;

int main(){
    float a,bb=1500,bs=600,bk=200;
    cin>>a;
    int sisa=0;
    int i=0;

    do{
        sisa=a%bb;
    }while(sisa>bb);
    cout<<sisa;
}
