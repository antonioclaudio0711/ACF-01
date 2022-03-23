#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float numero01, numero02, numero03;
	
	printf("Insira o primeiro número:");
	scanf("%f",&numero01);
	printf("Insira o segundo número:");
	scanf("%f",&numero02);
	printf("Insira o terceiro número:");
	scanf("%f",&numero03);
	if (numero01 > numero02 && numero01 > numero03 && numero02 > numero03)
	{
		printf("A sequência dos números descritos em ordem decrescente é: %.2f; %.2f; %.2f.", numero01, numero02, numero03);
	}
		else if (numero01 > numero02 && numero01 > numero03 && numero03 > numero02)
		{
			printf("A sequência dos números descritos em ordem decrescente é: %.2f; %.2f; %.2f.", numero01, numero03, numero02);
		}
			else if (numero02 > numero01 && numero02 > numero03 && numero01 > numero03)
			{
				printf("A sequência dos números descritos em ordem decrescente é: %.2f; %.2f; %.2f.", numero02, numero01, numero03);
			}
				else if (numero02 > numero01 && numero02 > numero03 && numero03 > numero01)
				{
					printf("A sequência dos números descritos em ordem decrescente é: %.2f; %.2f; %.2f.", numero02, numero03, numero01);
				}
					else if (numero03 > numero01 && numero03 > numero02 && numero01 > numero02)
					{
						printf("A sequência dos números descritos em ordem decrescente é: %.2f; %.2f; %.2f.", numero03, numero01, numero02);
					}
						else if (numero03 > numero01 && numero03 > numero02 && numero02 > numero01)
						{
							printf("A sequência dos números descritos em ordem decrescente é: %.2f; %.2f; %.2f.", numero03, numero02, numero01);
						}
}
