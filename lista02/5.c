#include<stdio.h>

int fatorial(int n)
{
    int fat = 1;
    
    while (n>1) {
        fat *= n;
        --n;
    }

    return fat;
}

int coefBi(int n, int k)
{

	int termo1,termo2,termo3;
	termo1 = fatorial(n);
	termo2 = fatorial(k);
	termo3 = fatorial(n-k);

	return (termo1/(termo2*termo3));

}

int main ()
{

	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",coefBi(n,k));

	return 0;

}