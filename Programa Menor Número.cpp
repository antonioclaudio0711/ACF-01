#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int numero01, numero02, numero03;
	
	printf("Insira o primeiro n�mero:");
	scanf("%i",&numero01);
	printf("Insira o segundo n�mero:");
	scanf("%i",&numero02);
	printf("Insira o terceiro n�mero:");
	scanf("%i",&numero03);
	if (numero01 == numero02)
	{
		printf("Insira tr�s valores distintos!");			
	}
		else if (numero02 == numero03)
		{
			printf("Insira tr�s valores distintos!");
		}
			else if (numero03 == numero01)
			{
				printf("Insira tr�s valores distintos!");
			}	
				else if (numero01 == numero02 && numero01 == numero03)
				{
					printf("Insira tr�s valores distintos!");
				}
					else if (numero01 < numero02 && numero01 < numero03)
					{
						printf("O menor n�mero dentre os inseridos �: %i", numero01);
					}
						else if (numero02 < numero01 && numero02 < numero03)
						{
							printf("O menor n�mero dentre os inseridos �: %i", numero02);
						}
							else if (numero03 < numero01 && numero03 < numero02)
							{
								printf("O menor n�mero dentre os inseridos �: %i", numero03);
							}			
}
