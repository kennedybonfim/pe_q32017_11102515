#include <stdio.h>
#include <stdlib.h>

struct fichaAlunos
{
	char nome[100];
	unsigned int ra;
	float p1;
	float p2;
	float p3;
	float media;
};

struct fichaAlunos alunos[50];

void lerFichaAlunos (char nomeArq[100], unsigned int nAlunos)
{
	FILE *file;
	
	file = fopen (nomeArq, "r");

	for (int i = 0; i< nAlunos; i++)
	{
		fscanf(file, "%s %d %f %f %f", &alunos[i].nome[0], &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
		alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;	
	}
}

void gerarMedias (char nomeArq[100], unsigned int nAlunos)
{
	FILE *file;
	
	file = fopen (nomeArq,"w");

	for (int i = 0; i < nAlunos; i++)
	{
		fprintf(file, "%s %d %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].media);
	}
}

int main ()
{
	lerFichaAlunos("lista_alunos.txt", 50);
	gerarMedias ("media_alunos.txt", 50);

	return 0;
}