#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float N, soma;
	soma = 0;
	
	printf("Escreva um n�mero:");
	scanf("%f",&N);
	
	for(i=0; i<=N; i++)
	{
		soma = soma + i;
	}
	
	printf("A soma dos valores at� %.2f �: %.2f", N, soma);
}
