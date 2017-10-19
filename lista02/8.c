#include<stdio.h>

float descontos (float salarioBase, int faltas)
{
	float desc = faltas*(salarioBase/20);

	return desc;
}

float acrescimos (float salarioBase, int horasExtras)
{
	float acresc = horasExtras*((salarioBase/160)+40);

	return acresc;
}

float salario (float salarioBase, int faltas, int horasExtras)
{
	float desc = descontos(salarioBase, faltas); 
	float acresc = acrescimos(salarioBase, horasExtras);
	float salarioFinal = salarioBase+acresc-desc;

	return salarioFinal;
}

float cargo(int idCargo)
{
	float salarioBase;

	switch (idCargo){

	case 1: salarioBase = 10000; break;
	case 2: salarioBase = 8000; break;
	case 3: salarioBase = 5000; break;
	case 4: salarioBase = 3000; break;
 	case 5: salarioBase = 2000; break;

	default:
		printf ("Dados invalidos!\n");
	}
	return salarioBase;
}

int main () {

	int idCargo, faltas, horasExtras;
	float salarioBase, salarioFinal;

	scanf("%d %d %d",&idCargo,&faltas,&horasExtras);
	
	salarioBase = cargo(idCargo);
	salarioFinal = salario(salarioBase, faltas, horasExtras);
	
	printf("%.2f\n",salarioFinal);

	return 0;

}