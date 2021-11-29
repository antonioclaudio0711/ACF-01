#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int A, B, C, D;
	
	printf("Insira o primeiro valor:");
	scanf("%f",&A);
	printf("Insira o segundo valor:");
	scanf("%f",&B);
	printf("Insira o terceiro valor:");
	scanf("%f",&C);
	printf("Insira o quarto valor:");
	scanf("%f",&D);
	
	if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0)
	{
		printf("Valores aceitos!");
	}
}
