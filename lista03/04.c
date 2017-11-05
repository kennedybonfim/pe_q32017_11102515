#include <stdio.h>

void lerMatriz(int matriz[3][3])
{
	unsigned int linhas=3;
	int *colunas=&linhas;
	
	for(int i=0; i<linhas; i++)
	{
		for(int j=0; j< *colunas; j++) scanf("%d",&matriz[i][j]);
	}
	printf("\n");
}

void imprimirMatriz(int matriz[3][3])
{

	unsigned int linhas=3;
	int *colunas=&linhas;
	
	for(int i=0; i<linhas; i++)
	{
		for(int j=0; j< *colunas; j++) printf("%d ",matriz[j][i]);
		printf("\n");
	}
	
}

int main()
{
	int matriz[3][3];
	lerMatriz(matriz);
	imprimirMatriz(matriz);
	
	return 0;
}