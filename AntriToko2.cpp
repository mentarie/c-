#include <bits/stdc++.h>
using namespace std;

int main(){
    char x, data[1000];
    int a=0,b=0;
    for(int i=0;i<1000;i++){
        cin>>x;
        if(x=='P'){
            a++;
        }else if(x=='L'){
            b++;
        }else if(x!= 'P' || x!='L'){
            break;
        }
    }
    if(a>=b){
        cout<<"tidak aktif"<<endl;
    }else{
        cout<<"aktif"<<endl;
    }
}
