#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c){
    int maks=0;
    if(a>b && a>c){
        maks=a;
    }else if(b>a && b>c){
        maks=b;
    }else if(c>a && c>b){
        maks=c;
    }
    return maks;
}

int main(){
    int a1, a2, a3;
    cin>>a1>>a2>>a3;
    cout << max(a1, a2, a3)<< endl;
    return 0;
}
