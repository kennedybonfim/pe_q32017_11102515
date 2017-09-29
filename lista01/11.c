#include <stdio.h>

int main(){

	int valor,opcao,resultado,exp,expoente;

	printf("Entre com um valor inteiro:\n");
	scanf("%d",&valor);

	printf("Entre com uma opçao de conversao de bases numericas: \n(1) Base decimal para binaria\n(2) Base binaria para decimal\n");
	scanf("%d",&opcao);

	while(opcao!=1&&opcao!=2){

		printf("Opçao Invalida!\n");
		printf("Entre com uma opçao de conversao de bases numericas: \n(1) Base decimal para binaria\n(2) Base binaria para decimal\n");
		scanf("%d",&opcao);

	}

	expoente=0;
	resultado=0;

	if(opcao == 1){
 	
		while(valor!=0){
			
			exp = 1;

			for(int i=0; i<expoente;i++){

				exp = exp*10;	
			}

			resultado = resultado+((valor%2)*exp);
			valor=valor/2;
			++expoente;
		}

		printf("Resultado da conversao: %d\n",resultado);

	}

	else {

		while(valor!=0&&(valor%10<=1)){
			
			exp = 1;

			for(int i=0; i<expoente;i++){

				exp = exp*2;	
			}

			resultado = resultado+((valor%10)*exp);
			valor=valor/10;
			++expoente;

		}

		if (valor%10 <= 1){
			printf("Resultado da conversao: %d\n",resultado);
		}

		else{
			printf("Conversao impossivel! Obs.: numero não binario.\n");
		}
	}
	
	return 0;

}
