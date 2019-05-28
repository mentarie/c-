#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int x,counter=0;
    while(cin>>x){
        if(x<=0){
            break;
        }else{
            counter++;
        }
    }
    cout<<counter<<endl;
}
