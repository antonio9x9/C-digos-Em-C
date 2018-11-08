int Busca_binaria_rec(int v[], int tam, int chave, int min, int max){

	int med = (max+min)/2;
	
	if(v[med] == chave)
		return med;
	else
		if(v[med] < chave){
			max = med-1;
			return Busca_binaria_rec(v, tam, chave, min, max);
		}
		else{
			max = med-1;
			return Busca_binaria_rec(v, tam, chave, min, max);
		}
	}
