#include <iostream>
using namespace std;

//bikin struct
struct mahasiswa{
    int nim;
    mahasiswa *next=NULL;
};

struct linkedlist{
    mahasiswa *head=NULL;
    mahasiswa *tail=NULL;
    int count;
};
//banyak struct
linkedlist daftar[5];

bool isEmpty(linkedlist L){
    if(L.head==NULL){
        return true;
    }else{
        return false;
    }
}

void push(linkedlist &L, int x){
    mahasiswa *b;
    b=new mahasiswa;
    b->nim=x;
    if(isEmpty(L)){
        b->next=NULL;
        L.tail=b;
    }else{
        b->next=L.head;
    }

    L.head=b;
    L.count++;
}

void index(int x){
 int id = x % 5;
 push(daftar[id],x);
}

void show(linkedlist L){
    mahasiswa *p;
    p=L.head;
    while(p!=NULL){
        cout<<p->nim;
        p=p->next;
    }
}

int main (){
 int n;
 mahasiswa x;
 cin >> n;
 for(int i=0; i<n; i++){
  cin >> x.nim ;
  index(x.nim);
 }

 for (int i=0; i<5; i++){
  cout << i << '=';
  show(daftar[i]);
  cout << "\n";
 }
}
