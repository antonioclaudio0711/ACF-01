#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float valor;
	
	printf("Insira um número qualquer:");
	scanf("%f",&valor);
	if (valor > 10)
	{
		printf("O valor %.2f é maior que 10!", valor);
	}
		else if (valor < 10)
		{
			printf("O valor %.2f é menor que 10!", valor);
		}
			else if (valor = 10)
			{
				printf("O valor %.2f é igual à 10!", valor);
			}
}
