#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valor_do_carro, avista, parcela06, parcela12, parcela18, parcela24, parcela30, parcela36, parcela42, parcela48, parcela54, parcela60;
	
	printf("Insira o valor do carro:");
	scanf("%f",&valor_do_carro);
	
	avista = 0.8 * valor_do_carro;
	printf("\nValor do carro à vista: %.2f.", avista);
	printf("\n***************");
	
	parcela06 = 1.03 * valor_do_carro;
	printf("\nValor do carro baseando-se em 06 parcelas: %.2f.", parcela06);
	printf("\nValor de cada parcela: %.2f.", parcela06 / 6);
	printf("\n***************");
	
	parcela12 = 1.06 * valor_do_carro;
	printf("\nValor do carro baseando-se em 12 parcelas: %.2f.", parcela12);
	printf("\nValor de cada parcela: %.2f.", parcela12 / 12);
	printf("\n***************");
	
	parcela18 = 1.09 * valor_do_carro;
	printf("\nValor do carro baseando-se em 18 parcelas: %.2f.", parcela18);
	printf("\nValor de cada parcela: %.2f.", parcela18 / 18);
	printf("\n***************");
	
	parcela24 = 1.12 * valor_do_carro;
	printf("\nValor do carro baseando-se em 24 parcelas: %.2f.", parcela24);
	printf("\nValor de cada parcela: %.2f.", parcela24 / 24);
	printf("\n***************");
	
	parcela30 = 1.15 * valor_do_carro;
	printf("\nValor do carro baseando-se em 30 parcelas: %.2f.", parcela30);
	printf("\nValor de cada parcela: %.2f.", parcela30 / 30);
	printf("\n***************");
	
	parcela36 = 1.18 * valor_do_carro;
	printf("\nValor do carro baseando-se em 36 parcelas: %.2f.", parcela36);
	printf("\nValor de cada parcela: %.2f.", parcela36 / 36);
	printf("\n***************");
	
	parcela42 = 1.21 * valor_do_carro;
	printf("\nValor do carro baseando-se em 42 parcelas: %.2f.", parcela42);
	printf("\nValor de cada parcela: %.2f.", parcela42 / 42);
	printf("\n***************");
	
	parcela48 = 1.24 * valor_do_carro;
	printf("\nValor do carro baseando-se em 48 parcelas: %.2f.", parcela48);
	printf("\nValor de cada parcela: %.2f.", parcela48 / 48);
	printf("\n***************");
	
	parcela54 = 1.27 * valor_do_carro;
	printf("\nValor do carro baseando-se em 54 parcelas: %.2f.", parcela54);
	printf("\nValor de cada parcela: %.2f.", parcela54 / 54);
	printf("\n***************");
	
	parcela60 = 1.3 * valor_do_carro;
	printf("\nValor do carro baseando-se em 60 parcelas: %.2f.", parcela60);
	printf("\nValor de cada parcela: %.2f.", parcela60 / 60);
	printf("\n***************");
}
