/*
5 reais o ingresso ---> ser�o vendidos 120 ingressos (despesas = 200)
4,5 reais o ingresso ---> ser�o vendidos 146 ingressos
4 reais o ingresso ---> ser�o vendidos 
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int escolha, quantidade_de_ingressos_vendidos;
	float lucro;
	
	printf("*****************************************************************");
	printf("\n*****			MENU DE OP��ES			*********");
	printf("\n***** 1 - Ingresso vendido a R$ 5,00			*********");
	printf("\n***** 2 - Ingresso vendido a R$ 4,50			*********");
	printf("\n***** 3 - Ingresso vendido a R$ 4,00			*********");
	printf("\n***** 4 - Ingresso vendido a R$ 3,50			*********");
	printf("\n***** 5 - Ingresso vendido a R$ 3,00			*********");
	printf("\n***** 6 - Ingresso vendido a R$ 2,50			*********");
	printf("\n***** 7 - Ingresso vendido a R$ 2,00			*********");
	printf("\n***** 8 - Ingresso vendido a R$ 1,50			*********");
	printf("\n***** 9 - Ingresso vendido a R$ 1,00			*********");
	printf("\n*****************************************************************");
	printf("\nEscolha uma das op��es mostradas acima:");
	scanf("%i",&escolha);
	
	switch(escolha)
	{
		case 1:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 5 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 5,00, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 2:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 4.5 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 4,50, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 3:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 4 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 4,00, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 4:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 3.5 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 3,50, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 5:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 3 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 3,00, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 6:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 2.5 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 2,50, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 7:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 2 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 2,00, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 8:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 1.5 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 1,50, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		case 9:
			quantidade_de_ingressos_vendidos = 120 + (escolha - 1) * 26; 
			lucro = 1 * quantidade_de_ingressos_vendidos - 200;
			printf("Com o ingresso sendo vendido a R$ 1,00, ser�o vendidos %i ingressos, obtendo-se um lucro de R$ %.2f;", quantidade_de_ingressos_vendidos, lucro);
		break;
		
		default:
			printf("Selecione uma op��o v�lida!");
	}
	printf("\n");
	printf("\nO maior lucro esperado ser� de R$ 493,00. Valor obtido atrav�s da venda de 198 ingressos com valor unit�rio de R$ 3,50.");
}
