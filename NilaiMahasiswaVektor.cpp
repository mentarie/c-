#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    vector<int>saringan;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=0 && x<=100){
            saringan.push_back(x);
        }
    }
    for(int i=saringan.size()-1;i>=0;i--){
        cout<<saringan[i]<<endl;
    }
}
