/*
Fa�a um algoritmo que calcule e mostre os n�meros primos de 1 at� 500.
- lembre-se que n�meros primos s�o aqueles que podem ser divididos somente por 01 e por eles mesmos. Desta forma, n�meros primos s�o divis�veis somente duas vezes. ---> 1, 2, 3, 5, 7, 11, 13 ...
- Um n�mero � considerado divis�vel por outro quando o resto da dic=vis�o � igual a zero;
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, cont;
	cont = 0;
	
	for(i=1; i<=500; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%j == 0)
			{
				cont = cont + 1;
			}
		}
		if(cont == 2)
		{
			printf("%i - ", i);
		}
		cont = 0;
	}
	
}

