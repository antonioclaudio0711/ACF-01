/*
Fa�a um algoritmo que mostre os n�meros de 1 a 500 que s�o divis�veis por 7;
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=7; i<=500; i=i+7)
	{
		printf("%i - ", i);
	}
}

