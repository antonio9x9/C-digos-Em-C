#include<stdio.h>

// Returna 1 cso n�o possuam MDC
int MDC_rec(int x, int y){
	int aux =0;
	
	// deixa o maior valor na variavel x
	if(y>x){
		aux = x;
		x = y;
		y =x;
	}
	
	// caso o segundo temro seja 0, returna o 1� como o MDC
	if(y == 0)
		return x;
	
	// pega o resto da divis�o de x por y
	int r = x%y;
	
	// o caso base, � o resto da divis�o dar zero
	if(x%y == 0){
		return y;
	}
	else{
		// vai pegando o resto da divis�o de x por y at� que chegue no caso base.
		x =y;
		y = r;
		r = x%y;
		return MDC_rec(x, y);
	}	
}

int main(){
	
	printf("MDC: %d\n", MDC_rec(5, 3));
	
	return 0;
}
