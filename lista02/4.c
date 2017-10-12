#include<stdio.h>
#include<math.h>

enum operacao {nd,SOMA, SUB, MULT, DIV, POT};

int main ()
{

	int operacao;
	float x,y;

	scanf("%d %f %f",&operacao,&x,&y);

	switch (operacao) {

	case SOMA:
		printf("%.2f\n",x+y);
	break;

	case SUB:
		printf("%.2f\n",x-y);
	break;

	case MULT:
		printf("%.2f\n",x*y);
	break;

	case DIV:
		printf("%.2f\n",x/y);
	break;

 	case POT:
		printf("%.2f\n",(pow(x,y)));
	break;

	default:
		printf ("Operacao Invalida!\n");

	}

	return 0;

}