#include<stdio.h>
#include<locale.h>
#include<locale.h>

int programa09(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor, resposta09;
	
	printf("RESOLUÇÃO DO NONO PROBLEMA\n");
	printf("Insira um valor inteiro e positivo:");
	scanf("%i",&valor);
	
	resposta09 = programa09(valor);
	
	printf("A soma dos divisores do número %i é %i.", valor, resposta09);
}

int programa09(int x)
{
	int i, soma;
	soma = 0;
	
	for(i=1; i<=x; i++)
	{
		if(x%i == 0)
		{
			soma = soma + i;
		}
	}
	
	return soma;
}
