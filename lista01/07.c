#include <stdio.h>

int main(){

	int x, expoente, num;

	printf("Entre com um valor inteiro x: ");
	scanf("%d",&x);

	printf("Entre com um expoente inteiro para x: ");
	scanf("%d",&expoente);
	
	num = x;

	for ( int i = 1; i < expoente; i++){
	
		x*=num;

	}
	
	printf("O resultado de %d elevado ao expoente %d é %d\n",num,expoente,x);	

	return 0;
}
