#include<stdio.h>
#include<locale.h>
#include<math.h>

int programa03(int x, int y);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor01, valor02, resposta03;
	
	printf("RESOLU��O DO TERCEIRO PROBLEMA\n");
	printf("Insira um valor:");
	scanf("%i",&valor01);
	printf("Insira um valor:");
	scanf("%i",&valor02);
	
	resposta03 = programa03(valor01, valor02);
	
	if(resposta03 == 0)
	{
		printf("Como %i � divis�vel por %i, retorna-se 0.", valor01, valor02);
	}
	else
	{
		printf("Pr�ximo divisor = %i", resposta03);
	}
}

int programa03(int x, int y)
{
	if(x%y == 0)
	{
		return 0;
	}
	else
	{
		while(x%y != 0)
		{
			y++;
		}
		return y;
	}
}
