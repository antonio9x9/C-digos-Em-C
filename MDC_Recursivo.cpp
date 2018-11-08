#include<stdio.h>

// Returna 1 cso não possuam MDC
int MDC_rec(int x, int y){
	int aux =0;
	
	// deixa o maior valor na variavel x
	if(y>x){
		aux = x;
		x = y;
		y =x;
	}
	
	// caso o segundo temro seja 0, returna o 1º como o MDC
	if(y == 0)
		return x;
	
	// pega o resto da divisão de x por y
	int r = x%y;
	
	// o caso base, é o resto da divisão dar zero
	if(x%y == 0){
		return y;
	}
	else{
		// vai pegando o resto da divisão de x por y até que chegue no caso base.
		x =y;
		y = r;
		r = x%y;
		return MDC_rec(x, y);
	}	
}
