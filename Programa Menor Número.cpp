#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int numero01, numero02, numero03;
	
	printf("Insira o primeiro número:");
	scanf("%i",&numero01);
	printf("Insira o segundo número:");
	scanf("%i",&numero02);
	printf("Insira o terceiro número:");
	scanf("%i",&numero03);
	if (numero01 == numero02)
	{
		printf("Insira três valores distintos!");			
	}
		else if (numero02 == numero03)
		{
			printf("Insira três valores distintos!");
		}
			else if (numero03 == numero01)
			{
				printf("Insira três valores distintos!");
			}	
				else if (numero01 == numero02 && numero01 == numero03)
				{
					printf("Insira três valores distintos!");
				}
					else if (numero01 < numero02 && numero01 < numero03)
					{
						printf("O menor número dentre os inseridos é: %i", numero01);
					}
						else if (numero02 < numero01 && numero02 < numero03)
						{
							printf("O menor número dentre os inseridos é: %i", numero02);
						}
							else if (numero03 < numero01 && numero03 < numero02)
							{
								printf("O menor número dentre os inseridos é: %i", numero03);
							}			
}
