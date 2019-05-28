#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    //i=1 karena dia dimulai dari angka 1
    for(int i=1;i<x;i++){
        //cout<<i<<endl;
        for(int j=1;j<x;j++){
            //cout<<i<<j<<endl;
            for(int k=1;k<x;k++){
                //cout<<i<<j<<k<<endl;
                for(int l=1;l<x;l++){
                    //cout<<i<<j<<k<<l<<endl;
                    if(i+j+k+l==x){
                        cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                    }
                }
            }
        }
    }
}
