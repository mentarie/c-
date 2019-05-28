#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int n,a,b;
char c;

cin>>n;
int array1[n];

for(int i=0;i<n;i++){
    cin >> array1[i];
}

cin >> a >> b >> c;

int array2[b-a+1];
for(int j=a-1, k=0;j<=b-1;j++, k++){
    array2[k]=array1[j];
}
if(c=='A'){
        sort(array2+0,array2+b-a+1);
    }else {sort(array2+0,array2+b-a+1,greater<int>());}

    for(int i=0;i<b-a+1;i++){
        if (i==b-a) cout << array2[i] << "\n";
        else cout << array2[i] << ' ';
    }
}
