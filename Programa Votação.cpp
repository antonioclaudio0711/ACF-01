#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int ano_atual, ano_nascimento, idade;
	
	printf("Escreva o ano atual:");
	scanf("%i",&ano_atual);
	printf("Escreva o ano de seu nascimento:");
	scanf("%i",&ano_nascimento);
	
	idade = ano_atual - ano_nascimento;
	
	if (idade < 16)
	{
		printf("Você possui %i anos e não está apto a votar!", idade);
	}
		else if (idade >= 16)
		{
			printf("Você possui %i anos e está apto a votar!", idade);
		}
}
