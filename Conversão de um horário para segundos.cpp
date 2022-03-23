#include<stdio.h>
#include<locale.h>
#include<math.h>

void programa02();

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("RESOLUÇÃO DO SEGUNDO PROBLEMA\n");
	programa02();
}

void programa02()
{
	int horas, minutos, segundos, total;
	
	printf("Insira o valor referente às horas (01 - 24):");
	scanf("%i",&horas);
	printf("Insira o valor referente aos minutos (00 - 59):");
	scanf("%i",&minutos);
	printf("Insira o valor referente aos segundos (01 - 59):");
	scanf("%i",&segundos);
	
	total = (horas * 3600) + (minutos * 60) + segundos;
	
	printf("%i horas, %i minutos e %i segundos correspondem a %i segundos.", horas, minutos, segundos, total);
}
