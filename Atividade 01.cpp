#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	float base_triangulo, altura_triangulo, area_triangulo, a, b, c, a2, b2, c2, a3, b3, c3, raiz1, raiz2, delta, raiz0, raiz3;
	
	printf("*****************************************************************");
	printf("\n			MENU DE OPÇÕES			");
	printf("\n1 - Calcular a área de um triângulo ");
	printf("\n2 - Ordenar de forma crescente 03 valores");
	printf("\n3 - Ordenar de forma decrescente 03 valores");
	printf("\n4 - Calcular as raízes de uma equação do 2º grau (Ax² + Bx + C)");
	printf("\n*****************************************************************");
	printf("\nInforme uma dentre as opções apresentadas:");
	scanf("%i",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Você selecionou 'Calcular a área de um triângulo'!");
			printf("\nInsira o valor da base do triângulo:");
			scanf("%f",&base_triangulo);
			printf("\nInsira o valor da altura do triângulo:");
			scanf("%f",&altura_triangulo);
		
			area_triangulo = (base_triangulo * altura_triangulo) / 2;
			
			printf("A área do triângulo de base %.0f e altura %.0f é: %.2f", base_triangulo, altura_triangulo, area_triangulo);
			break;
		
		case 2:
			printf("Você selecionou 'Ordenar de forma crescente 03 valores'!");
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
					printf("A ordem crescente dos valores inseridos é: %.2f %.2f %.2f", a, b, c);
				}
				else
				{
					printf("A ordem crescente dos valores inseridos é: %.2f %.2f %.2f", a, c, b);
				}
			}
			
			if(b < a && b < c)
			{
				if(a < c)
				{
					printf("A ordem crescente dos valores inseridos é: %.2f %.2f %.2f", b, a, c);
				}
				else
				{
					printf("A ordem crescente dos valores inseridos é: %.2f %.2f %.2f", b, c, a);
				}
			}	
			
			if(c < a && c < b)
			{
				if(a < b)
				{
					printf("A ordem crescente dos valores inseridos é: %.2f %.2f %.2f", c, a, b);
				}
				else
				{
					printf("A ordem crescente dos valores inseridos é: %.2f %.2f %.2f", c, b, a);
				}
			}			
			break;
		
		case 3:
			printf("Você selecionou 'Ordenar de forma decrescente 03 valores'!");
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
					printf("A ordem decrescente dos valores inseridos é: %.2f %.2f %.2f", a2, b2, c2);
				}
				else
				{
					printf("A ordem decrescente dos valores inseridos é: %.2f %.2f %.2f", a2, c2, b2);
				}
			}
			
			if(b2 > a2 && b2 > c2)
			{
				if(a2 > c2)
				{
					printf("A ordem decrescente dos valores inseridos é: %.2f %.2f %.2f", b2, a2, c2);
				}
				else
				{
					printf("A ordem decrescente dos valores inseridos é: %.2f %.2f %.2f", b2, c2, a2);
				}
			}	
			
			if(c2 > a2 && c2 > b2)
			{
				if(a2 > b2)
				{
					printf("A ordem decrescente dos valores inseridos é: %.2f %.2f %.2f", c2, a2, b2);
				}
				else
				{
					printf("A ordem decrescente dos valores inseridos é: %.2f %.2f %.2f", c2, b2, a2);
				}
			}			
			break;
		
		case 4:
			printf("Você selecionou 'Calcular as raízes de uma equação do 2º grau (Ax² + Bx + C)'!");
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
			
			
			printf("As raízes para uma equação com os valores inseridos é: %.2f %.2f", raiz1, raiz3);
			break;
		
		default:
			printf("Erro! Selecione uma opção válida!");
	}
}
