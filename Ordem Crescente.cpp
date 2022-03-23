#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float numero01, numero02, numero03;
	
	printf("Insira o primeiro valor:");
	scanf("%f",&numero01);
	printf("Insira o segundo valor:");
	scanf("%f",&numero02);
	printf("Insira o terceiro valor:");
	scanf("%f",&numero03);
	if (numero01 < numero02 && numero01 < numero03 && numero02 < numero03)
	{
		printf("A ordem crescente dos números inseridos é: %.2f; %.2f; %.2f.\n", numero01, numero02, numero03);
		printf("%.2f < %.2f e %.2f < %.2f e %.2f < %.2f.", numero01, numero02, numero01, numero03, numero02, numero03);
	}
		else if (numero01 < numero02 && numero01 < numero03 && numero03 < numero02)
		{
			printf("A ordem crescente dos números inseridos é: %.2f; %.2f; %.2f.\n", numero01, numero03, numero02);
			printf("%.2f < %.2f e %.2f < %.2f e %.2f < %.2f.", numero01, numero02, numero01, numero03, numero03, numero02);
		}
			else if (numero02 < numero01 && numero02 < numero03 && numero01 < numero03)
			{	
				printf("A ordem crescente dos números inseridos é: %.2f; %.2f; %.2f.\n", numero02, numero01, numero03);
				printf("%.2f < %.2f e %.2f < %.2f e %.2f < %.2f.", numero02, numero01, numero02, numero03, numero01, numero03);
			}
				else if (numero02 < numero01 && numero02 < numero03 && numero03 < numero01)
				{		
					printf("A ordem crescente dos números inseridos é: %.2f; %.2f; %.2f.\n", numero02, numero03, numero01);
					printf("%.2f < %.2f e %.2f < %.2f e %.2f < %.2f.", numero02, numero01, numero02, numero03, numero03, numero01);
				}
					else if (numero03 < numero01 && numero03 < numero02 && numero01 < numero02)
					{	
						printf("A ordem crescente dos números inseridos é: %.2f; %.2f; %.2f.\n", numero03, numero01, numero02);
						printf("%.2f < %.2f e %.2f < %.2f e %.2f < %.2f.", numero03, numero01, numero03, numero02, numero01, numero02);
					}
						else if (numero03 < numero01 && numero03 < numero02 && numero02 < numero01)
						{			
							printf("A ordem crescente dos números inseridos é: %.2f; %.2f; %.2f.\n", numero03, numero02, numero01);
							printf("%.2f < %.2f e %.2f < %.2f e %.2f < %.2f.", numero03, numero01, numero03, numero02, numero02, numero01);
						}
}
