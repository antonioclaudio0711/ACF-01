/*
Faça um programa em C que receba três números inteiros. Mostre ao usuário o menu abaixo de opções:
		MENU DE OPÇÕES
	1 - Mostrar os números em ordem crescente;
	2 - Mostrar os números em ordem decrescente;
	3 - Mostrar o maior número entre os outros 2;
*/ 

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha, numero01, numero02, numero03;
	
	printf("***************************************************\n");
	printf("**                 MENU DE OPÇÕES                **\n");
	printf("** 1 - Mostrar os números em ordem crescente     **\n");
	printf("** 2 - Mostrar os números em ordem decrescente   **\n");
	printf("** 3 - Mostrar o maior número entre os outros 2  **\n");
	printf("***************************************************\n");
	scanf("%i",&escolha);
	
	switch(escolha)
	{
		case 1:
			printf("Mostrarei os números em ordem crescente!\n");
			printf("Insira o primeiro número:");
			scanf("%i",&numero01);
			printf("Insira o segundo número:");
			scanf("%i",&numero02);
			printf("Insira o terceiro número:");
			scanf("%i",&numero03);
				if (numero01 < numero02 && numero01 < numero03 && numero02 < numero03)
				{
					printf("A sequência dos números em ordem crescente é: %i, %i, %i.", numero01, numero02, numero03);
				}
					else if (numero01 < numero02 && numero01 < numero03 && numero03 < numero02)
					{
						printf("A sequência dos números em ordem crescente é: %i, %i, %i.", numero01, numero03, numero02);
					}
						else if (numero02 < numero01 && numero02 < numero03 && numero01 < numero03)
						{
							printf("A sequência dos números em ordem crescente é: %i, %i, %i.", numero02, numero01, numero03);
						}
							else if (numero02 < numero01 && numero02 < numero03 && numero03 < numero01)
							{		
								printf("A sequência dos números em ordem crescente é: %i, %i, %i.", numero02, numero03, numero01);
							}
								else if (numero03 < numero01 && numero03 < numero02 && numero01 < numero02)
								{
									printf("A sequência dos números em ordem crescente é: %i, %i, %i.", numero03, numero01, numero02);
								}
									else if (numero03 < numero01 && numero03 < numero02 && numero02 < numero01)
									{
										printf("A sequência dos números em ordem crescente é: %i, %i, %i.", numero03, numero02, numero01);
									}
	break;
		
		case 2:
			printf("Mostrarei os números em ordem decrescente!\n");
			printf("Insira o primeiro número:");
			scanf("%i",&numero01);
			printf("Insira o segundo número:");
			scanf("%i",&numero02);
			printf("Insira o terceiro número:");
			scanf("%i",&numero03);
				if (numero01 > numero02 && numero01 > numero03 && numero02 > numero03)
				{
					printf("A sequência dos números em ordem decrescente é: %i, %i, %i.", numero01, numero02, numero03);
				}
					else if (numero01 > numero02 && numero01 > numero03 && numero03 > numero02)
					{
						printf("A sequência dos números em ordem decrescente é: %i, %i, %i.", numero01, numero03, numero02);
					}
						else if (numero02 > numero01 && numero02 > numero03 && numero01 > numero03)
						{
							printf("A sequência dos números em ordem decrescente é: %i, %i, %i.", numero02, numero01, numero03);
						}
							else if (numero02 > numero01 && numero02 > numero03 && numero03 > numero01)
							{		
								printf("A sequência dos números em ordem decrescente é: %i, %i, %i.", numero02, numero03, numero01);
							}
								else if (numero03 > numero01 && numero03 > numero02 && numero01 > numero02)
								{
									printf("A sequência dos números em ordem decrescente é: %i, %i, %i.", numero03, numero01, numero02);
								}
									else if (numero03 > numero01 && numero03 > numero02 && numero02 > numero01)
									{
										printf("A sequência dos números em ordem decrescente é: %i, %i, %i.", numero03, numero02, numero01);
									}
		break;
		
		case 3:
			printf("Motrarei o maior número dentre os inseridos!\n");
			printf("Insira o primeiro número:");
			scanf("%i",&numero01);
			printf("Insira o segundo número:");
			scanf("%i",&numero02);
			printf("Insira o terceiro número:");
			scanf("%i",&numero03);
				if (numero01 > numero02 && numero01 > numero03)
				{
					printf("O maior número dentre os inseridos é: %i.", numero01);
				}
					else if (numero02 > numero01 && numero02 > numero03)
					{
						printf("O maior número dentre os inseridos é: %i.", numero02);
					}
						else if (numero03 > numero01 && numero03 > numero02)
						{
							printf("O maior número dentre os inseridos é: %i.", numero03);
						}
		break;
		
		default:
			printf("A opção selecionada é inválida!");
	}
}
