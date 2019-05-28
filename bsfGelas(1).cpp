Binary Search

BFS
struct gelas{
	int isi;
	int max;
};
struct situasi{
	int sumber;
	gelas A;
	gelas B;
};

void ambil(gelas &x){
	x.isi = x.max;
}
void tuang(gelas &x, gelas &y){
	int temp2 = x.isi + y.isi;
	if (y.max >= temp2){
		y.isi = temp2;
		x.isi = 0;
	}
	else{
		y.isi = y.max;
		x.isi = temp2 - y.max;
	}
}
void buang(gelas &x){
	x.isi = 0;
}
situasi data[100];
void masukkan(situasi x, int &indx){
	bool insert = true;
	for(int i=0; i<indx; i++){
		if(x.A.isi == data[i].A.isi){insert = false;}
	}
	if(insert){
		data[indx] = x;
		indx++;
	}
}
void generate(int &index, int sumber){
	situasi gen[6];
	for(int i=0; i<6; i++){
		gen[i].sumber = sumber;
		gen[i].A = data[sumber].A;
		gen[i].B = data[sumber].B;
	}
	ambil(gen[0].A); masukkan(gen[0], index);
	ambil(gen[1].B); masukkan(gen[1], index);
	tuang(gen[2].A, gen[2].B); masukkan(gen[2], index);
	tuang(gen[3].B, gen[3].A); masukkan(gen[3], index);
	buang(gen[4].A); masukkan(gen[4], index);
	buang(gen[5].B); masukkan(gen[5], index);
}
bfs(gelas awalA, gelas awalB, gelas cariA, gelas cariB){
	if(awalA.isi == cariA.isi && awalB == cariB.isi){ /Ya sudah, tidak perlu cari;}
	else{
		int cek =0; int insert = 1;
		data[0].sumber = -1;
		data[0].A = awalA;
		data[0].B = awalB;
		generate(insert, cek);
		while(data[cek].A.isi != cariA.isi && data[cek].B.isi != cariB.isi ){
			generate(insert, cek);
			cek++;
		}
	}
}


DFS ini sudah ya...
	tranversal di tree.. cari kiri terus baru kanan
		void kunjungi(node *r){
			if(r !=NULL){
				kunjungi(r->kiri);
				kunjungi(r->kanan);
			}
		}