#include<stdio.h>

unsigned int inverter (unsigned int n, unsigned int inverso) {
	if (n==0) return inverso;
	return inverter(n/10, inverso*10+n%10);
}

void palindromo (unsigned int num) {
	unsigned int inverso = inverter(num,0);
	if( num==inverso ) printf("sim\n");
	else printf("nao\n");
}

int main(){

	unsigned int n;
	scanf("%d",&n);	
	palindromo(n);	
	return 0;
}