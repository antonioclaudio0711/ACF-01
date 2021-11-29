#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, numero;
	float soma;
	
	printf("\nInsira um valor inteiro e positivo:");
	scanf("%i",&numero);
	
	for(i=1; i<=numero; i++)
	{
		soma = soma + 1 / i;
	}
	
	printf("\nA soma requerida é de: %f.", soma);
}
