#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float numero01, numero02;
	
	printf("Insira o primeiro n�mero:");
	scanf("%f",&numero01);
	printf("Insira o segundo n�mero:");
	scanf("%f",&numero02);
	if (numero01 > numero02)
	{
		printf("O maior n�mero dentre os inseridos �: %.2f", numero01);
	}
		else if (numero02 > numero01)
		{
			printf("O maior n�mero dentre os inseridos �: %.2f", numero02);
		}
}
