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
	printf("**            MENU DE OPÇÕES            **\n");
	printf("** 1 - Soma                             **\n");
	printf("** 2 - Subtração                        **\n");
	printf("** 3 - Multiplicação                    **\n");
	printf("** 4 - Divisão                          **\n");
	printf("******************************************\n");
	printf("Selecione uma das opções apresentadas:");
	scanf("%i",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Você selecionou a opção da operação soma!\n");
			printf("Indique a quantidade de números que você deseja somar:");
			scanf("%i",&quantidade_de_numeros);
			
			for(i=1; i<=quantidade_de_numeros; i++)
			{
				printf("Insira um número a ser somado:");
				scanf("%f",&numero);
				soma = soma + numero;
			}
			printf("A soma dos números inseridos é: %.2f", soma);
		break;
		
			
			case 2:
				printf("Você selecionou a opção da operação subtração!\n");
						printf("Insira o primeiro número:");
						scanf("%f",&numeroA);
						printf("Insira o segundo número:");
						scanf("%f",&numeroB);
						
						subtracao = numeroA - numeroB;
						
				printf("A subtração dos números inseridos é: %.2f", subtracao);
			break;
				
				
				case 3:
					printf("Você selecionou a opção da operação multiplicação!\n");
					printf("Indique a quantidade de números que você deseja multiplicar:");
					scanf("%i",&quantidade_de_numeros);
			
					for(i=1; i<=quantidade_de_numeros; i++)
					{
						printf("Insira um número a ser multiplicado:");
						scanf("%f",&numero);
						multiplicacao = multiplicacao * numero;
					}
					printf("A multiplicação dos números inseridos é: %.2f", multiplicacao);
					break;
					
					
					case 4:
						printf("Você selecionou a opção da operação divisão!\n");
						printf("Insira o primeiro número:");
						scanf("%f",&numeroA);
						printf("Insira o segundo número:");
						scanf("%f",&numeroB);
			
						if(numeroB != 0)
						{
							divisao = numeroA / numeroB; 
							printf("A divisão dos números inseridos é: %.2f", divisao);
						}
						else
						{
							printf("Não existe divisão por zero!");
						}
						
						break;
						
						default: 
						printf("Opção inválida!");
	}
	
}
