#include <stdio.h>

int main(){

	int opcao;
	double temperatura;

	printf("Entre com um valor de temperatura:\n");
	scanf("%lf",&temperatura);

	printf("Entre com uma opçao de conversao de escalas de temperatura: \n(1) Celsius para Fahrenheit\n(2) Fahrenheit para Celsius\n");
	scanf("%d",&opcao);

	while(opcao!=1&&opcao!=2){

	printf("Opçao Invalida!\n");
	printf("Entre com uma opçao de conversao de escalas de temperatura: \n(1) Celsius para Fahrenheit\n(2) Fahrenheit para Celsius\n");
	scanf("%d",&opcao);

	}

	if(opcao == 1){
		
		temperatura=(temperatura*1.8)+32;
		printf("A temperatura equivalente e %.1fºF\n",temperatura);	

	}
	else {

		temperatura=(temperatura-32)/1.8;
		printf("A temperatura equivalente e %.1fºC\n",temperatura);

	}
	
	return 0;

}
