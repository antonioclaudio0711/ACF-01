#include<stdio.h>
#include<locale.h>
#include<math.h>

void programa03(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a;
	
	printf("Insira um valor:");
	scanf("%i",&a);
	printf("***********************");
	
	programa03(a);
}

void programa03(int x)
{
	int i, valor, maior_valor, menor_valor;
	float soma, media;
	soma = 0;
	maior_valor = x;
	menor_valor = x;
	
	for(i=1; i<=4; i++)
	{
		printf("\nInsira um valor:");
		scanf("%i",&valor);
		printf("***********************");
		if(valor>maior_valor)
		{
			maior_valor = valor;
		}
		else if(valor<menor_valor)
		{
			menor_valor = valor;
		}
		soma = soma + valor;
	}
	media = (soma + x) / 5;
	printf("\nO maior valor inserido é: %i", maior_valor);
	printf("\nO menor valor inserido é: %i", menor_valor);
	printf("\nA média dos valores inseridos é: %.2f", media);
}
	
