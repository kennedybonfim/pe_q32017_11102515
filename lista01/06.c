#include <stdio.h>

int main(){

	int x,contador,fatorial;
	printf("Entre com um valor inteiro x: ");
	scanf("%d",&x);
	
	contador = x;
	fatorial = x;

	if (contador == 0){

		fatorial = 1;

	}
	
	else {


		for ( int i = 1; i < contador; i++){
	
			fatorial*= (x-1);
			--x;

		}

	}
	
	printf("O fatorial de %d é igual a %d\n",contador,fatorial);	

	return 0;
}
