#include<stdio.h>
#include<math.h>
#include<locale.h>

float area_triangulo(float x, float y);
void ordem_crescente(float x, float y, float z);
void ordem_decrescente(float x, float y, float z);
void bhaskara(int x, int y, int z);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int escolha;
	float base, altura, resp1;
	float A, B, C;
	float D, E, F;
	int G, H, I;
	
	printf("***************************************************************");
	printf("\n			MENU DE OP��ES		");
	printf("\n1 - Calcular a �rea de um tri�ngulo");
	printf("\n2 - Ordenar de forma crescente 03 valores");
	printf("\n3 - Ordenar de forma decrescente 03 valores");
	printf("\n4 - Calcular as ra�zes de uma equa��o do 2� grau (Ax� + Bx + C)");
	printf("\n***************************************************************");
	printf("\nSelecione uma das op��es:");
	scanf("%i",&escolha);
	
	switch(escolha)
	{
		case 01:
			printf("Voc� selecionou a op��o 'Calcular a �rea de um tri�ngulo'!");
			printf("\nInsira o valor da base do tri�ngulo:");
			scanf("%f",&base);
			printf("\nInsira o valor da altura do tri�ngulo:");
			scanf("%f",&altura);
			
			resp1 = area_triangulo(base, altura);
			
			printf("A �rea do tri�ngulo com as dimens�es especificadas �: %.2f", resp1);
		break;
			
		case 02:
			printf("Voc� selecionou a op��o 'Ordenar de forma crescente 03 valores'!");
			printf("\nInsira o primeiro valor:");
			scanf("%f",&A);
			printf("\nInsira o segundo valor:");
			scanf("%f",&B);
			printf("\nInsira o terceiro valor:");
			scanf("%f",&C);
			
			ordem_crescente(A, B, C);
		break;
			
		case 03:
			printf("Voc� selecionou a op��o 'Ordenar de forma decrescente 03 valores'!");
			printf("\nInsira o primeiro valor:");
			scanf("%f",&D);
			printf("\nInsira o segundo valor:");
			scanf("%f",&E);
			printf("\nInsira o terceiro valor:");
			scanf("%f",&F);
			
			ordem_decrescente(D, E, F);
		break;
			
		case 04:
			printf("Voc� selecionou a op��o 'Calcular as ra�zes de uma equa��o do 2� grau (Ax� + Bx + C)'!");
			printf("\nInsira o valor de A:");
			scanf("%i",&G);
			printf("\nInsira o valor de B:");
			scanf("%i",&H);
			printf("\nInsira o valor de C:");
			scanf("%i",&I);
			
			bhaskara(G, H, I);
		break;
			
		default:
			{
				printf("Selecione uma op��o v�lida!");
			}
	}
}

// Calcular a �rea de um tri�ngulo
float area_triangulo(float x, float y)
{
	float resposta;
	resposta = (x * y) / 2;
	return resposta;
}

// Ordenar de forma crescente 03 valores
void ordem_crescente(float x, float y, float z)
{		
	if (x < y && x < z)
	{
		if(y < z)
		{
			printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", x, y, z);
		}
		else
		{
			printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", x, z, y);
		}
	}
	
	if (y < x && y < z)
	{
		if(x < z)
		{
			printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", y, x, z);
		}
		else
		{
			printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", y, z, x);
		}
	}
	
	if (z < x && z < y)
	{
		if(x < y)
		{
			printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", z, x, y);
		}
		else
		{
			printf("A ordem crescente dos valores inseridos �: %.2f %.2f %.2f", z, y, x);
		}
	}
}

//Ordenar de forma decrescente 03 valores
void ordem_decrescente(float x, float y, float z)
{		
	if (x > y && x > z)
	{
		if(y > z)
		{
			printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", x, y, z);
		}
		else
		{
			printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", x, z, y);
		}
	}
	
	if (y > x && y > z)
	{
		if(x > z)
		{
			printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", y, x, z);
		}
		else
		{
			printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", y, z, x);
		}
	}
	
	if (z > x && z > y)
	{
		if(x > y)
		{
			printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", z, x, y);
		}
		else
		{
			printf("A ordem decrescente dos valores inseridos �: %.2f %.2f %.2f", z, y, x);
		}
	}
}

//Calcular as ra�zes de uma equa��o do 2� grau (Ax� + Bx + C)
void bhaskara(int x, int y, int z)
{
	float delta, raiz;
	float resp1, resp2;
	float raiz1, raiz2;
	
	delta = pow(y,2) - (4 * x * z);
	raiz = sqrt(delta);
	
	resp1 = - y + raiz;
	resp2 = - y - raiz;
	
	raiz1 = resp1 / (2 * x);
	raiz2 = resp2 / (2 * x);
	
	printf("As ra�zes da equa��o com os valores inseridos s�o: %.2f e %.2f", raiz1, raiz2);
}
