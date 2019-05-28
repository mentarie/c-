#include <bits/stdc++.h>
using namespace std;

int main(){
    float a,b;//float, karena hasil pembagiannya bisa desimal dan < b
    cin>>a>>b;
    int i=0;
    //diulang hingga a kurang dari panjang lidah (b)
    //pakai while, karena? while itu diibaratkan gabungan dari if dan for
    while(a>b){
        a=a/2;//atau 2.0
        i++;
    }
    cout<<i<<endl;

}
