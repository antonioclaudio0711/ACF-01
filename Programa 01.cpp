#include<locale.h>
#include<stdio.h>
#include<math.h>

int programa01(int N);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int N, resposta01;
	
	printf("RESOLU��O DO PRIMEIRO PROBLEMA");
	printf("\nInsira um valor inteiro e positivo:");
	scanf("%i",&N);
	resposta01 = programa01(N);
	printf("A soma dos n�meros inteiros entre 01 e %i �: %i", N, resposta01);
}

int programa01(int N)
{
	int i, soma;
	soma = 0;
	
	for(i=2; i<=N; i++)
	{
		soma = soma + i;
	}
	return soma;
}
