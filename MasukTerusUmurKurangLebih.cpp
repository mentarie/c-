#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int x,y,maks=0,sum1=0,sum2=0;
    map<int,long long>searchmap;
    while(cin>>x){
        if (x<=0) {
            break;
        }else{
            searchmap[x]++;//nampung data cari sekaligus njumplahin ada berapa data dengan angka x
            maks=max(x,maks);//bandingin langsung dara x dengan maks, lalu replace
        }
    }
    cin>>y;

    for(int i=0;i<y;i++){
        sum1 += searchmap[i];
    }

    for (int i=y+1; i<=maks; i++){//cari yang lebih besar
        sum2 += searchmap[i];
    }
    cout << sum1 << "\n" << sum2 << "\n";
}
