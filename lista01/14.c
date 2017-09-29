#include <stdio.h>

int main(){

	int num;
	float media,somatoria;

	printf("Entre 10 inteiros: \n");

	for(int i=1; i<=10; i++){
		printf("%d: ",i);
		scanf("%d",&num);
		somatoria+=num;
	}
	
	media=somatoria/10;
	printf("Soma: %0.f\nMedia: %.1f\n",somatoria,media);

	return 0;
}