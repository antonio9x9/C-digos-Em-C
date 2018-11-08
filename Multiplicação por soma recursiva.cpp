int Mult_Soma_Rec(int a, int b){
	int c =0;
	
	if (b == 0){
		return c;
	}
	else{
		c = a + Mult_Soma_Rec(a, b-1);
		return c;
	}
}
