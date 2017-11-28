#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpfunc(const void *a, const void *b)
{
	return (*(int*)a-*(int*)b);
}

int lerVetor(int *v,int n)
{
	for(int i=0; i<n; i++) scanf("%d",&v[i]);
	return 0;
}

float mediana (int *v, int n)
{
	int i=0;
	
	if(n%2==0)
	{
		i = n/2;
		return ((v[i-1]+v[i])/2.0); 
	}
	else
	{
		i = n/2;
		return v[i];	
	}
}

int main()
{
	unsigned int n=0;
	scanf("%d",&n);

	int *v=(int*)malloc(n*sizeof(int));
	lerVetor(v,n);

	qsort(v, n, sizeof(int),cmpfunc);
	printf("%.2lf\n",mediana(v,n));
}