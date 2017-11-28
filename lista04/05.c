#include <stdio.h>
#include<stdlib.h>

int lerVetor(int *v,int n)
{
	for(int i=0; i<n; i++) scanf("%d",&v[i]);
	return 0;
}

int imprimirVetor(int **c,int n,int b)
{
		for(int i=0; i<n; i++)
		{
				if(c[i][1]>1) printf("%d-%d ",c[i][0],c[i][1]);
		}
		printf("\n");
}

int **contarRep(int *v, int n)
{
	int **c=malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	{
		c[i]=malloc(2*sizeof(int*));
		c[i][0]=v[i];
	}
	int cont=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{	
			if((c[i][0]==v[j])&&(v[j]!=-1))
			{
				if(i==j)
				{
					v[j]=-1;
					cont++;
				}
				else if(i!=j)
				{
					c[i][0]=v[j];
					v[j]=-1;
					cont++;
				}
			}
			c[i][1]=cont;
		}
		cont=0;
	}
	return c;
}

int main()
{
	unsigned int n=0;
	scanf("%d",&n);

	int *v=malloc(n*sizeof(int));
	
	lerVetor(v,n);
	imprimirVetor(contarRep(v,n),n,2);

	return 0;
}