#include <stdio.h>
#include <stdlib.h>

unsigned int tamanho(char *c)
{
	int i = 0;
	while(c[i]!='\0') i++;
	return i-1;
	printf("%d",i);
}

void *inverter (char *entrada, char *inv, int tam)
{
	for(int i=0; i<=tam; i++) inv[i] = entrada[tam-i];
}

void imprimeString (char *vetorChar, int tam)
{
	for(int i=0; i<=tam; i++) printf("%c", vetorChar[i]);
	printf("\n");
}

int main ()
{
	char entrada[255];
	char inv[255];
	fgets(entrada, 255, stdin);

	unsigned int tam = tamanho(entrada);

	inverter(entrada, inv, tam);
	imprimeString(inv,tam);
	
	return 0;
}