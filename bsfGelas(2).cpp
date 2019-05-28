int cariDeleteNode(node *r, int data){
    if(r==NULL){
        return -1;
    }else if(data==r->angka){
        return getMax(r->left);
    }else if(data>r->angka){
        cariDeleteNode(r->right,data);
    }else if(data<r->angka){
        cariDeleteNode(r->left,data);
    }
}

int getMax(node *r){
    if(r==NULL){
        return -1;
    }
    else if(r->right==NULL) {
        return r->angka;
    }else{
        return getMax(r->right);
    }
}
int getCariPengganti(node *r){
	if(r==NULL){return -1;}
	else if(r->left == NULL && r->right==NULL){return -1;}
	else if(r->left == NULL){return r->right->angka;}
	else if(r->right==NULL) {return r->left->angka;}
	else {return getMax(r->left);}
}
int cari(node *r, int data){
	if(r==NULL){
		return -1;
	}else{
		if(data == r->angka){
			return getCariPengganti(r);
		}
		else if(data > r-> angka){return cari(r->right, data);}
		else {return cari(r->left, data);}
	}
}