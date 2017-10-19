#include<stdio.h>

unsigned int potenciaTR (unsigned int x, unsigned int y, unsigned int base){

	if(y==1) return base;
	return potenciaTR(x, y-1, base*x);
   
}   

int main(){

	unsigned int x,y,resultado;

	scanf("%d %d",&x,&y);

	resultado = potenciaTR(x,y,x);

	printf("%d\n",resultado);

	return 0;
}