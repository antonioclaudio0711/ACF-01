/*
Alunos:
	Antônio Claudio Ferreira Filho - 2110854
	Douglas Gabriel - 1920191
	Iãh Uchôa - 2110151
	Sebastião Oliveira Silva Neto - 2011478
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int resposta(int x, char A, char B, char C);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int discos, solucao;
	
	printf("	TORRE DE HANOI		\n");
	printf("Insira a quantidade de discos:");
	scanf("%i",&discos);
	printf("*******************************\n");
	printf("\n");
	
	solucao = resposta(discos, 'A', 'C', 'B');
	
	printf("\n");
	printf("***************************************************************\n");
	printf("Foram necessários %i movimentos para resolver a torre de Hanoi.", solucao);
}

int resposta(int n, char x, char y, char z)
{
	int cont;
	cont = 0;
	
	if(n > 0)
	{
		cont = resposta(n - 1, x, z, y);
		printf("O disco %i é movido do pino %c para o pino %c.\n", n, x, y);
		cont = cont + 1;
		cont = cont + resposta(n - 1, z, y, x);
	}
	
	return cont;
}
