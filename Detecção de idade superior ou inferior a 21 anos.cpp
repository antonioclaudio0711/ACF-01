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
	
	//Saída de dados
	if (idade > 21)
	{
		printf("Você possui mais que 21 anos!");
	}
		else if (idade < 21)
		{
			printf("Você possui menos que 21 anos!");
		}
			else if (idade = 21)
			{
				printf("Você possui exatamente 21 anos!");
			}
}
