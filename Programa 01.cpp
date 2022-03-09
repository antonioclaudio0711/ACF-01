#include<stdio.h>
#include<math.h>
#include<locale.h>

int programa01(int x, int y, int z);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c, resposta;
	
	printf("Insira um valor:");
	scanf("%i",&a);
	if(a>1)
	{
		printf("Insira um valor:");
		scanf("%i",&b);
		printf("Insira um valor:");
		scanf("%i",&c);
	}
	
	resposta = programa01(a, b, c);
	printf("A soma dos valores entre os números %i e %i é %i.", b, c, resposta);
}

int programa01(int x, int y, int z)
{
	int i, soma;
	soma = 0;
	
	for(i=y; i<=z; i++)
	{
		if(i%x == 0)
		{
			soma = soma + i;
		}
	}
	
	return soma;
}
