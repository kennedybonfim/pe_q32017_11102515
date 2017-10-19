#include <stdio.h>

char unid;

float decimalBinario(float n)
{
	int valor = n;
	int expoente = 0;
	int resultado = 0; 

	while(valor!=0){
			
		int exp = 1;
		for(int i=0; i<expoente;i++) exp = exp*10;	

		resultado = resultado+((valor%2)*exp);
		valor=valor/2;
		++expoente;
	}
	return resultado;
}

float  binarioDecimal(float n)
{
	int valor = n;
	int expoente = 0; 
	int resultado = 0;
		
	while(valor!=0){
			
		int exp = 1;

		for(int i=0; i<expoente;i++) exp = exp*2;

		resultado = resultado+((valor%10)*exp);
		valor=valor/10;
		++expoente;
	}
	return resultado;
}

float celsiusFahrenheit(float temp)
{
	temp=(temp*1.8)+32;
	return temp;
}

float celsiusKelvin(float temp)
{		
	temp=temp+273.15;
	return temp;
}

float fahrenheitCelsius(float temp)
{
	temp=(temp-32)/1.8;
	return temp;
}

float fahrenheitKelvin(float temp)
{
	temp=((5/9)*(temp-32))+273;
	return temp;
}

float kelvinCelsius(float temp)
{
	temp=temp-273.15;
	return temp;
}

float kelvinFahrenheit(float temp)
{
	temp=((9/5)*(temp-273))+32;
	return temp;
}

float validaDados(int a, int b, int c, float valor)
{
	int opcao = (a*100)+(b*10)+c;

	switch (opcao) {

	case 111: valor = valor; unid='C'; break;
	case 112: valor = celsiusFahrenheit(valor); unid='F'; break;	
	case 113: valor = celsiusKelvin(valor); unid='K'; break;
	
	case 121: valor = kelvinCelsius(valor); unid='C'; break;
	case 122: valor = kelvinFahrenheit(valor); unid='F'; break;
	case 123: valor = valor; unid='K'; break;

	case 131: valor = fahrenheitCelsius(valor); unid='C'; break;
	case 132: valor=valor; unid='F'; break;
	case 133: valor = fahrenheitKelvin(valor); unid='K'; break;

	case 211: valor = valor; unid='\0'; break;
	case 212: valor = decimalBinario(valor); unid='\0'; break;

	case 221: valor = binarioDecimal(valor); unid='\0'; break;
	case 222: valor = valor; unid='\0'; break;

	default:
		printf("Dados invalidos!");

	}

	return valor;
}


int main ()
{

	int tipoConv, uEntrada, uSaida;
	float valor;

	scanf("%d %d %d %f",&tipoConv,&uEntrada,&uSaida,&valor);

	valor = validaDados(tipoConv,uEntrada,uSaida,valor);

	if (!unid) printf("%.0f\n",valor);
	else printf("%.2f %c\n",valor,unid);

	return 0;
}
