#include <stdio.h>

int main(){

	int x,y;
	int somaQuadrados=0;
	int quadradoSoma=0;
	int diferenca=0;

	printf("Entre dois inteiros x e y, onde x<y\nx: ");
	scanf("%d",&x);

	printf("y: ");
	scanf("%d",&y);

	while(x>y){

		printf("Dados Invalidos! x>y\n");

		printf("Entre dois inteiros x e y, onde x<y\nx: ");
		scanf("%d",&x);

		printf("y: ");
		scanf("%d",&y);

	}

	for(int i=x; i<=y;i++){

		somaQuadrados = somaQuadrados + i*i;

	}
	
	for(int i=x; i<=y;i++){

		quadradoSoma = quadradoSoma + i;

	}
	
	quadradoSoma = quadradoSoma*quadradoSoma;
	diferenca = quadradoSoma - somaQuadrados;

	printf("Para os naturais no intervalo entre %d e %d\n",x,y);
	printf("Soma dos quadrados: %d\nQuadrado da soma: %d\nDiferenca: %d\n",somaQuadrados,quadradoSoma,diferenca); 

	return 0;

}
