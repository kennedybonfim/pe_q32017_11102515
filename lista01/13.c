#include <stdio.h>

int main(){

	float termos,somatoria;

	printf("Entre o numero de termos da somatoria: ");
	scanf("%f",&termos);

	somatoria=(termos+1)/2*termos;

	printf("A soma de 1 a %.0f e igual a %.0f\n",termos,somatoria);

	return 0;
}