#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=1000; i<=2000; i++)
	{
		if(i%11 == 5)
		{
			printf("%i - ", i);
		}
	}
}
