#include<locale.h>
#include<stdio.h>
#include<math.h>

void resposta(int x[2][2], int y);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, M[2][2], maior_valor;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			if(i == 0 && j == 0)
			{
				printf("Insira um valor para a matriz:");
				scanf("%i",&M[i][j]);
				maior_valor = M[i][j];
			}
			else
			{
				printf("Insira um valor para a matriz:");
				scanf("%i",&M[i][j]);
				if(M[i][j] > maior_valor)
				{
					maior_valor = M[i][j];	
				}	
			}
		}
	}
	
	resposta(M, maior_valor);
}

void resposta(int x[2][2], int y)
{
	int i, j;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("[%i] ", x[i][j] * y);
		}
		printf("\n");
	}
}
