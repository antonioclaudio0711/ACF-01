#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

void matriz(int x[10][10]);
void diagonal_principal(int x[10][10]);
void diagonal_secundaria(int x[10][10]);
void diagonal_principal_secundaria(int x[10][10]);

#define linha 10
#define coluna 10

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, mat[linha][coluna];
	
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			mat[i][j] = rand()%10;
		}
	}
	
	matriz(mat);
	printf("\n");
	printf("****************************************\n");
	diagonal_principal(mat);
	printf("\n");
	printf("****************************************\n");
	diagonal_secundaria(mat);
	printf("\n");
	printf("****************************************\n");
	diagonal_principal_secundaria(mat);
	printf("\n");
}

void matriz(int x[linha][coluna])
{
	int i, j;
	
	printf("	   MATRIZ COMPLETA\n");
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("[%i] ", x[i][j]);
		}
		printf("\n");
	}
}

void diagonal_principal(int x[linha][coluna])
{
	int i, j;
	
	printf("	   DIAGONAL PRINCIPAL\n");
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			if(i == j)
			{
				printf("[%i] ", x[i][j]);
			}
			else
			{
				printf("[ ] ");
			}
		}
		printf("\n");
	}
}

void diagonal_secundaria(int x[linha][coluna])
{
	int i, j;
	
	printf("	   DIAGONAL SECUNDÁRIA\n");
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			if((i + j) == (coluna - 1))
			{
				printf("[%i] ", x[i][j]);
			}
			else
			{
				printf("[ ] ");
			}
		}
		printf("\n");
	}
}

void diagonal_principal_secundaria(int x[linha][coluna])
{
	int i, j;
	
	printf("	DIAGONAL PRINCIPAL E SECUNDÁRIA\n");
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			if(i == j)
			{
				printf("[%i] ", x[i][j]);
			}
				else if((i + j) == (coluna - 1))
				{
					printf("[%i] ", x[i][j]);
				}
					else
					{
						printf("[ ] ");
					}
		}
		printf("\n");
	}
}
