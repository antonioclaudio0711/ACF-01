#include<stdio.h>
#include<math.h>
#include<locale.h>

int programa10(int x, int y);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int x, z, resposta10;
	
	printf("RESOLUÇÃO DO DÉCIMO PROBLEMA\n");
	printf("Insira um valor:");
	scanf("%i",&x);
	printf("Insira um valor:");
	scanf("%i",&z);
	
	resposta10 = programa10(x, z);
	
	printf("O valor de %i elevado a %i é %i.", x, z, resposta10);
}

int programa10(int x, int y)
{
	int i, potencia;
	potencia = 1;
	
	for(i=1; i<=y; i++)
	{
		potencia = potencia * x;
	}
	
	return potencia;
}
