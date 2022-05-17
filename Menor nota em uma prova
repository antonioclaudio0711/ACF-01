#include<stdio.h>
#include<locale.h>
#include<math.h>

void resposta();

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	resposta();
}

void resposta()
{
	int i, j, prova, contagem01, contagem02, contagem03;
	float matriz[10][3], nota;
	contagem01 = 0;
	contagem02 = 0;
	contagem03 = 0;
	
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=3; j++)
		{
			printf("Insira o valor da nota do aluno %i para a prova %i:", i, j);
			scanf("%f",&matriz[i][j]);
			if(j == 1)
			{
				nota = matriz[i][j];
				prova = j;
			}
			else
			{
				if(matriz[i][j] < nota)
				{
					nota = matriz[i][j];
					prova = j;
				}
			}
		}
		
		if(prova == 1)
		{
			contagem01 = contagem01 + 1;
		}
		if(prova == 2)
		{
			contagem02 = contagem02 + 1;
		}
		if(prova == 3)
		{
			contagem03 = contagem03 + 1;
		}
		printf("A menor nota do aluno %i foi %.2f (prova %i)\n", i, nota, prova);
		printf("*************************************************************\n");
	}
	printf("Quantidade de alunos com menor nota na prova 01: %i\n", contagem01);
	printf("Quantidade de alunos com menor nota na prova 02: %i\n", contagem02);
	printf("Quantidade de alunos com menor nota na prova 03: %i\n", contagem03);
}
