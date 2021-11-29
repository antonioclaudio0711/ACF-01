#include<stdio.h>
#include<locale.h>
#include<math.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	// Entrada de dados
	printf("Digite a sua idade:");
	scanf("%i", &idade);
	
	//Saída de dados
	if(idade > 21)
	{
		printf("\nO usuário possui idade superior a 21 anos: %i", idade);
	}
}
