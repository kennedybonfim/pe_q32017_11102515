#include <stdio.h>

int main(){

	int termos,a,b,c;

	printf("Entre com um valor inteiro para a quantidade de termos: ");
	scanf("%d",&termos);

	if(termos <= 0){
		
		printf("Valor inválido!\n");		

	}
	
	else {
	
		a = 0;
		b = 1;
	
		printf("Sequência de Fibonacci para %d termos: %d, %d",termos,a,b);

		for ( int i = 1; i < termos; i++){

				c = b+a;
				printf(", %d", c);
				a = b;
				b = c;
		}
	
		printf(".\n");
	
	}
	
	return 0;

}
