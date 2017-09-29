#include<stdio.h>

int main(){

	int n;

	printf("Entre um inteiro superior a 100: ");
	scanf("%d", &n);
	printf("100");

	for(int i=101; i<=n; i++){
		if(i%2==0){
			printf(", %d",i);
		}
	}
	printf("\n");

	return 0;
}