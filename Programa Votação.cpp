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
		printf("Voc� possui %i anos e n�o est� apto a votar!", idade);
	}
		else if (idade >= 16)
		{
			printf("Voc� possui %i anos e est� apto a votar!", idade);
		}
}
