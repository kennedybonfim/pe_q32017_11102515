#include<stdio.h>
#include<math.h>

double x1,x2;
char i;

double bhaskara(double a, double b, double c)
{

	b = pow(b,2);
	return (b - (4*a*c));

}

void raizes (double a, double b, double c)
{
	double delta;
		
	delta = bhaskara(a,b,c);
	
	a = 2*a;
	b = -b;
	
	if (delta>0){

		delta = sqrt(delta);

		x1 = (b-delta)/a;
		x2 = (b+delta)/a;
		i = '\0';

	}
	else if (delta<0) {

		delta = sqrt(-delta);

		x1 = b/a;
		x2 = delta/a;
		i = 'i';

	}
	else {

		x1 = b/a;
		x2 = x1;
		i = '\0';

	}

}

int main ()
{

	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);

	raizes(a,b,c);
	
	if(!i) printf("%.2lf %.2lf\n",x1,x2);
	else printf("%.2lf+%.2lf%c %.2lf-%.2lf%c\n",x1,x2,i,x1,x2,i);

	return 0;

}