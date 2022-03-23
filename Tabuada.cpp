/*
Faça um algoritmo que mostre a tabuada de multiplicação do número digitado pelo usuário;
*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float numero;
	
	printf("Insira o número que você quer que seja multiplicado:");
	scanf("%f",&numero);
	
	for(i=0; i<=10; i=i+1)
	{
		printf("\n %i * %.2f = %.2f", i, numero, i*numero);
	}
}
