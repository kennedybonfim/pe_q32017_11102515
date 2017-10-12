#include <stdio.h>
#include <math.h>

double aproxPi(int n)
{
	double a = 1.0;
	double b = 1/sqrt(2);
	double t = 1.0/4.0;
	double p = 1.0;
	double a1;

	for(int i=0; i<n; i++) {

		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t-(p*(pow((a-a1),2)));
		p = 2*p;
		a = a1;
	}
	
	return (pow((a+b),2))/(4*t);

}

int main()
{
	unsigned int iteracoes;
	scanf("%d",&iteracoes);
	printf("%.20lf\n",aproxPi(iteracoes));

	return 0;
}