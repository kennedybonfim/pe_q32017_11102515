#include<stdio.h>

unsigned int binario[100];
unsigned int tamNum;
unsigned int decimal;


unsigned int decimalBinario (unsigned int num, unsigned int i){
	
	if(num==0) return 0;
	 binario[i] = num%2;
	tamNum++;
	return decimalBinario(num/2, i+1);
   
}

unsigned int binarioDecimal (unsigned int num, unsigned int i){
	
	if(num==0) return 0;
	decimal = decimal+(num%10)*i;
	return binarioDecimal(num/10, i*2);
   
}

int main(){

	unsigned int opcao,num;
	scanf("%d %d",&num,&opcao);
	tamNum = 0;

	switch (opcao){

	case 1:
		decimalBinario(num,0);
		for (int i = tamNum-1; i>=0 ; i--) printf("%d", binario[i]);
		printf("\n");		

	break;

	case 2:
		binarioDecimal(num,1);
		printf("%d\n",decimal);
	break;
	
	default:
		printf("Opcao Invalida!\n");

	}
	return 0;
}