#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int horas_de_trabalho_mes, hora_extra;
	float salario_hora, salario_total;
	
	printf("Insira a quantidade de horas trabalhadas durante o mês:");
	scanf("%i",&horas_de_trabalho_mes);
	printf("Insira o salário recebido por hora de trabalho:");
	scanf("%f",&salario_hora);
	if (horas_de_trabalho_mes <= 160)
	{
		salario_total = salario_hora * horas_de_trabalho_mes;
		printf("Diante de %i horas trabalhadas no mês, o salário recebido será de: %.2f.", horas_de_trabalho_mes, salario_total);
	}
		else if (horas_de_trabalho_mes > 160)
		{
			hora_extra = horas_de_trabalho_mes - 160;
			salario_total = (160 * salario_hora) + (1.5 * salario_hora * hora_extra);
			printf("Diante de %i horas trabalhadas no mês, o salário recebido será de: %.2f.", horas_de_trabalho_mes, salario_total);
		}
}
