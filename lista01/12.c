#include <stdio.h>

int main(){

	int opcao;

	printf("Entre com uma opçao de conversao de bases numericas: \n(1) Base decimal para hexadecimal\n(2) Base hexadecimal para decimal\n");
	scanf("%d",&opcao);

	while(opcao!=1&&opcao!=2){

		printf("Opçao Invalida!\n");
		printf("Entre com uma opçao de conversao de bases numericas: \n(1) Base decimal para hexadecimal\n(2) Base hexadecimal para decimal\n");
		scanf("%d",&opcao);

	}

	if(opcao == 1){

		unsigned int num;
		unsigned int x = 0;
		char restoDivisao[10];
		char numEmHexa[10];
		char charHexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
		printf("Entre com um numero inteiro:\n");
		scanf("%d",&num);

		while(num>0){

			restoDivisao[x] = charHexa[num%16];
			num=num/16;
			x++;

		}

		for(int i = 0; i<=x; i++){
				numEmHexa[x-1-i] = restoDivisao[i];
		}

		numEmHexa[x] = '\0';
		printf("Numero em hexa: %s\n", numEmHexa);

	}

	else {

		char num[2];
		int numEmDecimal=0;
	
		printf("Entre com um numero inteiro (de 00 a FF): ");
		scanf("%s", num);
	
		int pot = 1;
	
		for(int i=1; i>=0; i--){
			int a = num[i]-48;
			if(a>=0&&a<=9){
				numEmDecimal = numEmDecimal+(a*pot);
				pot = pot*16;
			}
			else if(a>=17&&a<=22){
				a = a-7;
				numEmDecimal = numEmDecimal+(a*pot);
				pot = pot*16;	
			}
			else if(a>=49&&a<=54){
				a = a-39;
				numEmDecimal = numEmDecimal+(a*pot);
				pot = pot*16;	
			}
			else{
				printf("Numero invalido!");
				i= -1;
			}
		}
		printf("Numero em decimal: %d\n",numEmDecimal);

	}
	return 0;

}
