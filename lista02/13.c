#include<stdio.h>

unsigned int mdc(unsigned int m, unsigned int n) {
	if (n==0) return m;
	return mdc(n, m%n);
}

int main(){

	unsigned int m,n;
	scanf("%d %d",&m,&n);

	printf("%d\n", mdc(m,n));	

	return 0;
}