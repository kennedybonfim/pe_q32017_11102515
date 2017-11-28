#include <stdio.h>

int compara(char letra)
{
	if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u') return 1;
	else return 0;
}

int contarVogais(char *c)
{
	unsigned int i=0, vogais=0;
	while(c[i]!='\0')
	{
		vogais+=compara(c[i]);
		i++;
	}
	return vogais;
}

int main ()
{
	char entrada[255];
	fgets(entrada,255,stdin);
	printf("%d\n",contarVogais(entrada));

 	return 0;
}