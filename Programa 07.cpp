#include<stdio.h>
#include<math.h>
#include<locale.h>

float programa07(float x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valor;
	float resposta07;
	
	printf("RESOLU��O DO S�TIMO PROBLEMA\n");
	printf("Insira um valor:");
	scanf("%f",&valor);
	
	resposta07 = programa07(valor);
	
	printf("A m�dia aritm�tica dos valores inseridos �: %.2f", resposta07);
}

float programa07(float x)
{
	float soma, contagem;
	float media;
	soma = x;
	contagem = 1;
	
	while(x != 0)
	{
		printf("Insira um valor:");
		scanf("%f",&x);
		
		soma = soma + x;
		contagem = contagem + 1; 
	}
	media = soma / contagem;
	
	return media; 
}
