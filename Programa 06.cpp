#include<stdio.h>
#include<locale.h>
#include<math.h>

float programa06(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	float soma;
	
	printf("Insira um valor:");
	scanf("%i",&valor);
	
	soma = programa06(valor);
	
	printf("A soma da sequência definida pelo valor inserido é: %.2f", soma);
}

float programa06(int x)
{
	int i;
	float soma;
	soma = 0;
	
	for(i=1; i<=x; i++)
	{
		soma = soma + (pow(i, 2) + 1) / (i + 3); 
	}
	
	return soma;
}
