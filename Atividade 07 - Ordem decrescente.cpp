/* 
Fa�a um algoritmo que mostre os n�meros de 01 a 500 em ordem decrescente.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>
 /*
 Decr�scimo de x ---> i-=x
 */
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	
	for(i=500; i>=0; i=i-1)
	{
		printf("%i - ", i);
	}
}
