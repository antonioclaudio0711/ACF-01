/*
Fa�a um programa em C que receba tr�s n�meros inteiros. Mostre ao usu�rio o menu abaixo de op��es:
		MENU DE OP��ES
	1 - Mostrar os n�meros em ordem crescente;
	2 - Mostrar os n�meros em ordem decrescente;
	3 - Mostrar o maior n�mero entre os outros 2;
*/ 

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha, numero01, numero02, numero03;
	
	printf("***************************************************\n");
	printf("**                 MENU DE OP��ES                **\n");
	printf("** 1 - Mostrar os n�meros em ordem crescente     **\n");
	printf("** 2 - Mostrar os n�meros em ordem decrescente   **\n");
	printf("** 3 - Mostrar o maior n�mero entre os outros 2  **\n");
	printf("***************************************************\n");
	scanf("%i",&escolha);
	
	switch(escolha)
	{
		case 1:
			printf("Mostrarei os n�meros em ordem crescente!\n");
			printf("Insira o primeiro n�mero:");
			scanf("%i",&numero01);
			printf("Insira o segundo n�mero:");
			scanf("%i",&numero02);
			printf("Insira o terceiro n�mero:");
			scanf("%i",&numero03);
				if (numero01 < numero02 && numero01 < numero03 && numero02 < numero03)
				{
					printf("A sequ�ncia dos n�meros em ordem crescente �: %i, %i, %i.", numero01, numero02, numero03);
				}
					else if (numero01 < numero02 && numero01 < numero03 && numero03 < numero02)
					{
						printf("A sequ�ncia dos n�meros em ordem crescente �: %i, %i, %i.", numero01, numero03, numero02);
					}
						else if (numero02 < numero01 && numero02 < numero03 && numero01 < numero03)
						{
							printf("A sequ�ncia dos n�meros em ordem crescente �: %i, %i, %i.", numero02, numero01, numero03);
						}
							else if (numero02 < numero01 && numero02 < numero03 && numero03 < numero01)
							{		
								printf("A sequ�ncia dos n�meros em ordem crescente �: %i, %i, %i.", numero02, numero03, numero01);
							}
								else if (numero03 < numero01 && numero03 < numero02 && numero01 < numero02)
								{
									printf("A sequ�ncia dos n�meros em ordem crescente �: %i, %i, %i.", numero03, numero01, numero02);
								}
									else if (numero03 < numero01 && numero03 < numero02 && numero02 < numero01)
									{
										printf("A sequ�ncia dos n�meros em ordem crescente �: %i, %i, %i.", numero03, numero02, numero01);
									}
	break;
		
		case 2:
			printf("Mostrarei os n�meros em ordem decrescente!\n");
			printf("Insira o primeiro n�mero:");
			scanf("%i",&numero01);
			printf("Insira o segundo n�mero:");
			scanf("%i",&numero02);
			printf("Insira o terceiro n�mero:");
			scanf("%i",&numero03);
				if (numero01 > numero02 && numero01 > numero03 && numero02 > numero03)
				{
					printf("A sequ�ncia dos n�meros em ordem decrescente �: %i, %i, %i.", numero01, numero02, numero03);
				}
					else if (numero01 > numero02 && numero01 > numero03 && numero03 > numero02)
					{
						printf("A sequ�ncia dos n�meros em ordem decrescente �: %i, %i, %i.", numero01, numero03, numero02);
					}
						else if (numero02 > numero01 && numero02 > numero03 && numero01 > numero03)
						{
							printf("A sequ�ncia dos n�meros em ordem decrescente �: %i, %i, %i.", numero02, numero01, numero03);
						}
							else if (numero02 > numero01 && numero02 > numero03 && numero03 > numero01)
							{		
								printf("A sequ�ncia dos n�meros em ordem decrescente �: %i, %i, %i.", numero02, numero03, numero01);
							}
								else if (numero03 > numero01 && numero03 > numero02 && numero01 > numero02)
								{
									printf("A sequ�ncia dos n�meros em ordem decrescente �: %i, %i, %i.", numero03, numero01, numero02);
								}
									else if (numero03 > numero01 && numero03 > numero02 && numero02 > numero01)
									{
										printf("A sequ�ncia dos n�meros em ordem decrescente �: %i, %i, %i.", numero03, numero02, numero01);
									}
		break;
		
		case 3:
			printf("Motrarei o maior n�mero dentre os inseridos!\n");
			printf("Insira o primeiro n�mero:");
			scanf("%i",&numero01);
			printf("Insira o segundo n�mero:");
			scanf("%i",&numero02);
			printf("Insira o terceiro n�mero:");
			scanf("%i",&numero03);
				if (numero01 > numero02 && numero01 > numero03)
				{
					printf("O maior n�mero dentre os inseridos �: %i.", numero01);
				}
					else if (numero02 > numero01 && numero02 > numero03)
					{
						printf("O maior n�mero dentre os inseridos �: %i.", numero02);
					}
						else if (numero03 > numero01 && numero03 > numero02)
						{
							printf("O maior n�mero dentre os inseridos �: %i.", numero03);
						}
		break;
		
		default:
			printf("A op��o selecionada � inv�lida!");
	}
}
