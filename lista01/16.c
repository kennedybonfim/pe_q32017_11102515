#include<stdio.h>

int main(){

	int idCargo, faltas, horasExtras;
	float salarioBase, descontos, acrescimos;

	printf("Entre o id do cargo: ");
	scanf("%d",&idCargo);

	printf("Entre o numero de faltas: ");
	scanf("%d",&faltas);

	printf("Entre o numero de horas extras: ");
	scanf("%d",&horasExtras);

	switch (idCargo){

	case 1:
		salarioBase = 10000;
		descontos = faltas*(salarioBase/20);
		acrescimos = horasExtras*((salarioBase/160)+40);
		salarioBase = salarioBase+acrescimos-descontos;

		printf("Cargo         : Diretor\n# de faltas   : %d\n# horas-extras: %d\n",faltas,horasExtras);
		printf("Descontos     : %.1f\nAcrescismos   : %.1f\nSalario       : %.1f\n",descontos,acrescimos,salarioBase);

	break;

	case 2:
		salarioBase = 8000;
		descontos = faltas*(salarioBase/20);
		acrescimos = horasExtras*((salarioBase/160)+40);
		salarioBase = salarioBase+acrescimos-descontos;

		printf("Cargo         : Gerente\n# de faltas   : %d\n# horas-extras: %d\n",faltas,horasExtras);
		printf("Descontos     : %.1f\nAcrescismos   : %.1f\nSalario       : %.1f\n",descontos,acrescimos,salarioBase);

	break;

	case 3:
		salarioBase = 5000;
		descontos = faltas*(salarioBase/20);
		acrescimos = horasExtras*((salarioBase/160)+40);
		salarioBase = salarioBase+acrescimos-descontos;

		printf("Cargo         : Engenheiro\n# de faltas   : %d\n# horas-extras: %d\n",faltas,horasExtras);
		printf("Descontos     : %.1f\nAcrescismos   : %.1f\nSalario       : %.1f\n",descontos,acrescimos,salarioBase);

	break;

	case 4:
		salarioBase = 3000;
		descontos = faltas*(salarioBase/20);
		acrescimos = horasExtras*((salarioBase/160)+40);
		salarioBase = salarioBase+acrescimos-descontos;

		printf("Cargo         : Tecnico\n# de faltas   : %d\n# horas-extras: %d\n",faltas,horasExtras);
		printf("Descontos     : %.1f\nAcrescismos   : %.1f\nSalario       : %.1f\n",descontos,acrescimos,salarioBase);

	break;

 	case 5:
		salarioBase = 2000;
		descontos = faltas*(salarioBase/20);
		acrescimos = horasExtras*((salarioBase/160)+40);
		salarioBase = salarioBase+acrescimos-descontos;

		printf("Cargo         : Operador\n# de faltas   : %d\n# horas-extras: %d\n",faltas,horasExtras);
		printf("Descontos     : %.1f\nAcrescismos   : %.1f\nSalario       : %.1f\n",descontos,acrescimos,salarioBase);

	break;

	default:
		printf ("Valor invalido!\n");

	}

	return 0;

}