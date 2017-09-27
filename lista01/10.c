#include <stdio.h>

int main(){

	int opcao;
	double temperatura;

	printf("Entre com um valor de temperatura:\n");
	scanf("%lf",&temperatura);

	printf("Entre com uma opçao de conversao de escalas de temperatura: \n(1) Celsius para Kelvin\n(2) Kelvin para Celsius\n");
	scanf("%d",&opcao);

	while(opcao!=1&&opcao!=2){

	printf("Opçao Invalida!\n");
	printf("Entre com uma opçao de conversao de escalas de temperatura: \n(1) Celsius para Kelvin\n(2) Kelvin para Celsius\n");
	scanf("%d",&opcao);

	}

	if(opcao == 1){
		
		temperatura=temperatura+273.15;
		printf("A temperatura equivalente e %.2fK\n",temperatura);	

	}
	else {

		temperatura=temperatura-273.15;
		printf("A temperatura equivalente e %.2fºC\n",temperatura);

	}
	
	return 0;

}
