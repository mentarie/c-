#include<iostream>
using namespace std;

int data[6];
int pol = 6; //max
int cacah = 0; //count

//fungsi getIndex dalam array
int fungsi(int angka){
    return angka%pol;
}
//lebokke
void lebokke(int angka){
    if(cacah < pol){
        int index=fungsi(angka);
        while(data[index]!=0){
            index = (index+1)%pol; //biar dia kalau dapat ke max array, kembali e 0, (5+1)%6=0
        }
        data[index]=angka;
        cacah++;
    }
}
//goleki
int goleki(int angka){
    int i=fungsi(angka);//i=angka%6
    int a= (i+pol-1) % pol; //jika i tidak = a, i=5, a=(5+5)%6=4
    while(data[i] != angka && i!=a){
        i=(i+1)%pol;
    }

    if(data[i]==angka){
        return i;
    }else{
        return -1;
    }
}
//nuduhake
void display()
{
    for(int i=0 ; i<pol ; i++)
    {
       cout <<i<< " " <<data[i]<< endl;
    }
}
//utama
int main(){
    int n,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        lebokke(p);
    }
    display();
    cout<<goleki(6)<<endl;
    cout<<goleki(4)<<endl;
    cout<<goleki(9)<<endl;
}
