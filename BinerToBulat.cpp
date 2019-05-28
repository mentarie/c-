#include <bits/stdc++.h>
using namespace std;

int biner(long long int n);

int biner(long long int n)
{
    int desimal=0,i=0,sisa;
    while(n!=0)
    {
        sisa=n%10 ;
        n/=10 ;
        desimal+=sisa*pow(2,i);
        i++;
    }
    return desimal;
}

int main()
{
    long long int n;
    cin>>n;
    biner(n);
    return 0;
}




