#include<stdio.h>
#include<math.h>
#include<locale.h>

float programa04(float x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio, resposta04;
	
	printf("RESOLUÇÃO DO QUARTO PROBLEMA\n");
	printf("Insira o valor do raio da esfera em estudo:");
	scanf("%f",&raio);
	
	resposta04 = programa04(raio);
	
	printf("O volume da esfera em estudo é: %.2f", resposta04);
}

float programa04(float x)
{
	float volume, pi, cubo;
	pi = 3.14;
	
	cubo = pow(x,3);
	volume = 1.3 * pi * cubo;
	
	return volume;
}
