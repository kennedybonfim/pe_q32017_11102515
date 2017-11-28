#include <stdio.h>

struct cronometro
{
	int min;
	int seg;
	int dSeg;
};

void difTemp (struct cronometro t1, struct cronometro t2)
{
	struct cronometro t3;
	char sinal = '\0';

	if(t1.min>t2.min)
	{
		t3 = t1;
		t1 = t2;
		t2 = t3;

		sinal = '-';
	}

	if((t2.dSeg - t1.dSeg) < 0)
	{
		t3.dSeg = t2.dSeg - t1.dSeg + 100;
		t2.seg = t2.seg - 1;
	}
	else
	{
		t3.dSeg = t2.dSeg - t1.dSeg;
	}

	if((t2.seg - t1.seg) < 0)
	{
		t3.seg = t2.seg - t1.seg + 60;
		t2.min = t2.min-1;
	}
	else
	{
		t3.seg = t2.seg - t1.seg;
	}

	t3.min = t2.min - t1.min;

	printf("%c%dm %ds %d\n", sinal,t3.min, t3.seg, t3.dSeg);
}

int main ()
{
	struct cronometro t1, t2;

	scanf("%dm %ds %d", &(t1.min), &(t1.seg), &(t1.dSeg));
	scanf("%dm %ds %d", &(t2.min), &(t2.seg), &(t2.dSeg));

	difTemp(t1,t2);

	return 0;
}