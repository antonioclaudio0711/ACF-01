#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int opcao, i, quantidade_de_numeros;
	float numero, soma, subtracao, multiplicacao, divisao, numeroA, numeroB;
	
	soma = 0;
	multiplicacao = 1;
	
	printf("******************************************\n");
	printf("**            MENU DE OP��ES            **\n");
	printf("** 1 - Soma                             **\n");
	printf("** 2 - Subtra��o                        **\n");
	printf("** 3 - Multiplica��o                    **\n");
	printf("** 4 - Divis�o                          **\n");
	printf("******************************************\n");
	printf("Selecione uma das op��es apresentadas:");
	scanf("%i",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Voc� selecionou a op��o da opera��o soma!\n");
			printf("Indique a quantidade de n�meros que voc� deseja somar:");
			scanf("%i",&quantidade_de_numeros);
			
			for(i=1; i<=quantidade_de_numeros; i++)
			{
				printf("Insira um n�mero a ser somado:");
				scanf("%f",&numero);
				soma = soma + numero;
			}
			printf("A soma dos n�meros inseridos �: %.2f", soma);
		break;
		
			
			case 2:
				printf("Voc� selecionou a op��o da opera��o subtra��o!\n");
						printf("Insira o primeiro n�mero:");
						scanf("%f",&numeroA);
						printf("Insira o segundo n�mero:");
						scanf("%f",&numeroB);
						
						subtracao = numeroA - numeroB;
						
				printf("A subtra��o dos n�meros inseridos �: %.2f", subtracao);
			break;
				
				
				case 3:
					printf("Voc� selecionou a op��o da opera��o multiplica��o!\n");
					printf("Indique a quantidade de n�meros que voc� deseja multiplicar:");
					scanf("%i",&quantidade_de_numeros);
			
					for(i=1; i<=quantidade_de_numeros; i++)
					{
						printf("Insira um n�mero a ser multiplicado:");
						scanf("%f",&numero);
						multiplicacao = multiplicacao * numero;
					}
					printf("A multiplica��o dos n�meros inseridos �: %.2f", multiplicacao);
					break;
					
					
					case 4:
						printf("Voc� selecionou a op��o da opera��o divis�o!\n");
						printf("Insira o primeiro n�mero:");
						scanf("%f",&numeroA);
						printf("Insira o segundo n�mero:");
						scanf("%f",&numeroB);
			
						if(numeroB != 0)
						{
							divisao = numeroA / numeroB; 
							printf("A divis�o dos n�meros inseridos �: %.2f", divisao);
						}
						else
						{
							printf("N�o existe divis�o por zero!");
						}
						
						break;
						
						default: 
						printf("Op��o inv�lida!");
	}
	
}
