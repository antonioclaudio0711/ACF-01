#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, contagem;
	float numero;
	contagem = 0;
	
	for(i=1; i<=10; i++)
	{
		printf("Insira um número:");
		scanf("%f",&numero);
		
		if(numero > 30 && numero < 90)
		{
			contagem = contagem + 1;
		}
	}
	
	printf("Dentre os números inseridos, %i estão entre 30 e 90.", contagem);
}
