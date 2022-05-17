#include<stdio.h>
#include<locale.h>
#include<math.h>

float sequencia(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	float resposta;
	
	printf("Insira um valor:");
	scanf("%i",&valor);
	if(valor >= 1)
	{
		resposta = sequencia(valor);
		printf("A soma da sequência é: %.2f", resposta);
	}
	else
	{
		printf("Insira um valor inteiro maior ou igual a 1!");
	}
}

float sequencia(int x)
{
	float S, i;
	S = 0;
	
	for(i=1; i<=x; i++)
	{
		S = S + (1/i);  
	}
	return S;
}
