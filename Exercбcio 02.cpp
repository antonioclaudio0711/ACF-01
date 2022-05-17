#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

main() {
	setlocale (LC_ALL,"Portuguese");
	
	int tam, i, j, a;
	int matriz[tam][tam], soma, contagem, vetor[contagem];
	soma = 0;
	contagem = 0;
	
	printf("Informe a dimensão da matriz desejada:");
	scanf("%i",&tam);
	
	srand(time(NULL));
	
	printf("\n	MATRIZ\n");
	for(i=0; i<tam; i++)
	{
		for(j=0; j<tam; j++) 
		{
			matriz[i][j] = rand()%100;
			printf("[%i] ", matriz[i][j]);
			
			if(j >= (tam - i))
			{
				soma = soma + matriz[i][j];
				contagem = contagem + 1;
				vetor[(contagem - 1)] = matriz[i][j];
			}
		}
		printf("\n");
	}
	
	printf("\nVALORES ABAIXO DA DIAGONAL SECUNDÁRIA\n");
	for(a=0; a<contagem; a++)
	{
		printf("[%i] ", vetor[a]);
	}
	
	printf("\nA soma dos %i elementos destacados acima é: %i", contagem, soma);
}
