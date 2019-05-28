#include <bits/stdc++.h>
using namespace std;

void binary(int desimal);

void binary(int desimal)
{
     int sisa;
     int hasil;

     if ( desimal <=1)
     {
        cout<<desimal;
        return;
     }
     sisa = desimal%2;
     hasil = desimal/2;
     binary(hasil);
     cout<<sisa;
}

int main()
{
    long int a;
    cin>>a;
    binary(a);
    cout<<endl;
}
