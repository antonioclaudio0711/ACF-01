#include<stdio.h>
#include<math.h>
#include<locale.h>

float programa05(int x);

main()
{
	int valor;
	float resposta;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número inteiro e positivo:");
	scanf("%i",&valor);
	
	resposta = programa05(valor);
	printf("O valor da soma de acordo com o número inserido é: %.2f", resposta);	
}

float programa05(int x)
{
	int i;
	float soma, fatorial, resposta, inverso;
	fatorial = 1;
	soma = 0;
		
	for(i=1; i<=x; i++)
	{
		fatorial = fatorial * i;
		inverso = 1/fatorial;
		soma = soma + inverso;
	}

	resposta = soma + 1;
	return resposta;
}
