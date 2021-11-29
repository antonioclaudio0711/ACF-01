#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int escolha_jogador, contagem_jogador1, contagem_jogador2, i;
	contagem_jogador1 = 0;
	contagem_jogador2 = 0;
	
	for(i=1; i<=100; i++)
	{
		printf("\nInsira o jogador que pontuou:");
		scanf("%i",&escolha_jogador);
		
		if(escolha_jogador == 1)
		{
			contagem_jogador1 = contagem_jogador1 + 1;
			if(contagem_jogador1 >= 21 && contagem_jogador1 - contagem_jogador2 >= 2)
			{
				printf("\n**O jogador 01 venceu! Inicie a próxima partida!**");
			}
		}
			else if(escolha_jogador == 2)
			{
				contagem_jogador2 = contagem_jogador2 + 1;
				if(contagem_jogador2 >= 21 && contagem_jogador2 - contagem_jogador1 >= 2)
				{
					printf("\n**O jogador 02 venceu! Inicie a próxima partida!**");
				}	
			}
		printf("\nO jogador 01 possui %i pontos e o jogador 02 possui %i pontos.", contagem_jogador1, contagem_jogador2);
	}
}
