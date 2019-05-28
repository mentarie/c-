#include <bits/stdc++.h>
using namespace std;
void konversiDes(int bin)
{
   int sisa,hasil,a;
   hasil=0;
   int pangkat=0;
   while(bin>=1)
   {
      sisa=bin%2;
      hasil+=sisa*pow(2,pangkat);
      bin=bin/10;
      pangkat++;
   }
   cout<<hasil<<endl;
}

int main(){
   int bin,des;
   int pil;
   cin>>bin;
   konversiDes(bin);
}
