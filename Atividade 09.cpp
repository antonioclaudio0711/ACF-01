#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	float numero, multiplicacao;
	int i;
	
	printf("Insira um valor:");
	scanf("%f",&numero);
	
	printf("** TABUADA DO %.2f **", numero);
	
	for(i=0; i<=10; i++)
	{
		multiplicacao = numero * i;
		printf("\n%.2f * %i = %.2f", numero, i, multiplicacao);
	}
}
