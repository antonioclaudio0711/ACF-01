#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int horas_de_trabalho_mes, hora_extra;
	float salario_hora, salario_total;
	
	printf("Insira a quantidade de horas trabalhadas durante o m�s:");
	scanf("%i",&horas_de_trabalho_mes);
	printf("Insira o sal�rio recebido por hora de trabalho:");
	scanf("%f",&salario_hora);
	if (horas_de_trabalho_mes <= 160)
	{
		salario_total = salario_hora * horas_de_trabalho_mes;
		printf("Diante de %i horas trabalhadas no m�s, o sal�rio recebido ser� de: %.2f.", horas_de_trabalho_mes, salario_total);
	}
		else if (horas_de_trabalho_mes > 160)
		{
			hora_extra = horas_de_trabalho_mes - 160;
			salario_total = (160 * salario_hora) + (1.5 * salario_hora * hora_extra);
			printf("Diante de %i horas trabalhadas no m�s, o sal�rio recebido ser� de: %.2f.", horas_de_trabalho_mes, salario_total);
		}
}
