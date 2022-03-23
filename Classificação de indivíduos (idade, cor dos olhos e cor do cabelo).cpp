#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, escolha_cor_dos_olhos, escolha_cor_do_cabelo, contagem01, soma_idades, contagem02, contagem03, contagem04;
	float peso, altura, media, porcentagem;
	contagem01 = 0;
	soma_idades = 0;
	contagem02 = 0;
	contagem03 = 0;
	contagem04 = 0;
	
	for(i=1; i<=2; i++)
	{
		printf("\nInsira a idade:");
		scanf("%i",&idade);
		printf("\nInsira o peso:");
		scanf("%f",&peso);
		printf("\nInsira a  altura:");
		scanf("%f",&altura);
		printf("\nInsira a cor dos olhos (1 - azul; 2 - preto; 3 - verde; 4 - castanho):");
		scanf("%i",&escolha_cor_dos_olhos);
		printf("\nInsira a cor do cabelo (1 - preto; 2 - castanho; 3 - louro; 4 - ruivo):");
		scanf("%i",&escolha_cor_do_cabelo);
		printf("\n*******************");
		
		if(idade > 50 && peso < 60)
		{
			contagem01 = contagem01 + 1;
		}
			else if(idade < 1.50)
			{
				soma_idades = soma_idades + idade;
				contagem02 = contagem02 + 1;
			}
				else if(escolha_cor_dos_olhos == 1)
				{
					contagem03 = contagem03 + 1;
				}
					else if(escolha_cor_do_cabelo == 4 && escolha_cor_dos_olhos != 1)
					{
						contagem04 = contagem04 + 1;
					}
		
	}
	
	printf("\nDentre as pessoas analisadas, %i possuem peso inferior a 60 kg, tendo idade superior a 50 anos.", contagem01);
	printf("\nDentre as pessoas analisadas, %i possuem cabelo ruivo e não possuem olhos azuis.", contagem04);
	
	media = soma_idades / contagem02;
	printf("\nA média de idade das pessoas que possuem menos de 1,50 m de altura é: %f.", media);
	
	porcentagem = 5 * contagem03;
	printf("\n%f por cento das pessoas analisadas possuem olhos azuis.", contagem03);
}
