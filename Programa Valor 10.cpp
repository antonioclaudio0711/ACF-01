#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float valor;
	
	printf("Insira um n�mero qualquer:");
	scanf("%f",&valor);
	if (valor > 10)
	{
		printf("O valor %.2f � maior que 10!", valor);
	}
		else if (valor < 10)
		{
			printf("O valor %.2f � menor que 10!", valor);
		}
			else if (valor = 10)
			{
				printf("O valor %.2f � igual � 10!", valor);
			}
}
