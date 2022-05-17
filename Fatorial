#include<stdio.h>
#include<locale.h>
#include<locale.h>

int programa08(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor, resposta08;
	
	printf("RESOLUÇÃO DO OITAVO PROBLEMA\n");
	printf("Insira um valor inteiro e positivo:");
	scanf("%i",&valor);
	
	resposta08 = programa08(valor);
	
	printf("O valor de %i! é %i", valor, resposta08);
}

int programa08(int x)
{
	int i, fatorial;
	fatorial = 1;
	
	for(i=1; i<=x; i++)
	{
		fatorial = fatorial * i;
	}
	
	return fatorial;
}
