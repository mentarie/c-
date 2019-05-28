#include <bits/stdc++.h>
using namespace std;

int main(){
    float t,p;
    cin>>t>>p;

    //p=pantulan, jadi i bakal di loop sampai sejumlah pantulan
    for(int i=0;i<p;i++){
        t=t*0.75;
    }
    cout<<t<<endl;
    //jika dijadikan meter
    cout<<t*1000<<endl;
}
