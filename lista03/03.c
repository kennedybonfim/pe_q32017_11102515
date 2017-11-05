#include <stdio.h>
#include <stdlib.h>

int *leVetor(int *v, int n)
{
	for(int i=0;i<n;i++) scanf("%d",&v[i]);
	return v;
}

void somaVetor(int *v1,int *v2, int n)
{
	int v3[n];
	
	for(int i=0;i<n;i++) 
	{
		v3[i] = v1[i]+v2[i];
		printf("%d ",v3[i]);
	}
	printf("\n");
}

int main()
{
	unsigned int i=5;
	int v1[i],v2[i];

	leVetor(v1,i);
	leVetor(v2,i);
	somaVetor(v1,v2,i);

	return 0;
}
