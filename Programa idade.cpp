#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	//Entrada de dados
	printf("Insira a sua idade:");
	scanf("%i",&idade);
	
	//Sa�da de dados
	if (idade > 21)
	{
		printf("Voc� possui mais que 21 anos!");
	}
		else if (idade < 21)
		{
			printf("Voc� possui menos que 21 anos!");
		}
			else if (idade = 21)
			{
				printf("Voc� possui exatamente 21 anos!");
			}
}
