#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	float base_triangulo, altura_triangulo, area_triangulo, a, b, c, a2, b2, c2, a3, b3, c3, raiz1, raiz2, delta, raiz0, raiz3;
	
	printf("*****************************************************************");
	printf("\n			MENU DE OP��ES			");
	printf("\n1 - Calcular a �rea de um tri�ngulo ");
	printf("\n2 - Ordenar de forma crescente 03 valores");
	printf("\n3 - Ordenar de forma decrescente 03 valores");
	printf("\n4 - Calcular as ra�zes de uma equa��o do 2� grau (Ax� + Bx + C)");
	printf("\n*****************************************************************");
	printf("\nInforme uma dentre as op��es apresentadas:");
	scanf("%i",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Voc� selecionou 'Calcular a �rea de um tri�ngulo'!");
			printf("\nInsira o valor da base do tri�ngulo:");
			scanf("%f",&base_triangulo);
			printf("\nInsira o valor da altura do tri�ngulo:");
			scanf("%f",&altura_triangulo);
		
			area_triangulo = (base_triangulo * altura_triangulo) / 2;
			
			printf("A �rea do tri�ngulo de base %.0f e altura %.0f �: %.2f", base_triangulo, altura_triangulo, area_triangulo);
			break;
		
		case 2:
			printf("Voc� selecionou 'Ordenar de forma crescente 03 valores'!");
			printf("\nInsira o primeiro valor:");
			scanf("%f",&a);
			printf("Insira o segundo valor:");
			scanf("%f",&b);
			printf("Insira o terceiro valor:");
			scanf("%f",&c);
			
			if(a < b && a < c)
			{
				if(b < c)
				{
					printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", a, b, c);
				}
				else
				{
					printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", a, c, b);
				}
			}
			
			if(b < a && b < c)
			{
				if(a < c)
				{
					printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", b, a, c);
				}
				else
				{
					printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", b, c, a);
				}
			}	
			
			if(c < a && c < b)
			{
				if(a < b)
				{
					printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", c, a, b);
				}
				else
				{
					printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", c, b, a);
				}
			}			
			break;
		
		case 3:
			printf("Voc� selecionou 'Ordenar de forma decrescente 03 valores'!");
			printf("\nInsira o primeiro valor:");
			scanf("%f",&a2);
			printf("Insira o segundo valor:");
			scanf("%f",&b2);
			printf("Insira o terceiro valor:");
			scanf("%f",&c2);
			
			if(a2 > b2 && a2 > c2)
			{
				if(b2 > c2)
				{
					printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", a2, b2, c2);
				}
				else
				{
					printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", a2, c2, b2);
				}
			}
			
			if(b2 > a2 && b2 > c2)
			{
				if(a2 > c2)
				{
					printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", b2, a2, c2);
				}
				else
				{
					printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", b2, c2, a2);
				}
			}	
			
			if(c2 > a2 && c2 > b2)
			{
				if(a2 > b2)
				{
					printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", c2, a2, b2);
				}
				else
				{
					printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", c2, b2, a2);
				}
			}			
			break;
		
		case 4:
			printf("Voc� selecionou 'Calcular as ra�zes de uma equa��o do 2� grau (Ax� + Bx + C)'!");
			printf("\nInsira o valor de A:");
			scanf("%f",&a3);
			printf("\nInsira o valor de B:");
			scanf("%f",&b3);
			printf("\nInsira o valor de C:");
			scanf("%f",&c3);
			
			delta = pow(b3, 2) - (4 * a3 * c3);
			
			raiz0 = - b3 + sqrt(delta);
			raiz1 = raiz0 / (2 * a3);
			
			
			raiz2 = - b3 - sqrt(delta);
			raiz3 = raiz2 / (2 * a3);
			
			
			printf("As ra�zes para uma equa��o com os valores inseridos �: %.2f %.2f", raiz1, raiz3);
			break;
		
		default:
			printf("Erro! Selecione uma op��o v�lida!");
	}
}
