#include <stdio.h>

void hanoi (char orig, char aux, char dest, unsigned int n)
{
	if(n==1)
	{
		printf("%c-%c ",orig,dest);
		return;
	}
	hanoi (orig, dest, aux, n-1);
	printf("%c-%c ",orig,dest);
	hanoi (aux, orig, dest, n-1);
}

int main ()
{
	unsigned int discos;
	scanf("%d", &discos);
	hanoi ('A', 'B', 'C', discos);
	printf("\n");
	return 0;
}