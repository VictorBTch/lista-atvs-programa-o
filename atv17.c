#include<stdio.h>
#include<stdlib.h>

int main(){
	int valor, nn1, nn2, nn3, nn4, nn5, nn6, nn7;	
	
printf("Digite o valor a ser retirado \n");
	scanf("%d", &valor);		

nn1 = 0;
nn2 = 0;
nn3 = 0;
nn4 = 0;
nn5 = 0;
nn6 = 0;
nn7 = 0;

if(valor>=100)
{
nn7 = valor / 100;
valor = valor % 100;
}

if(valor>=50)
{
nn6 = valor / 50;
valor = valor % 50;
}

if(valor>=20)
{
nn5 = valor / 20;
valor = valor % 20;
}

if(valor>=10)
{
nn4 = valor / 10;
valor = valor % 10;
}

if(valor>=5)
{
nn3 = valor / 5;
valor = valor % 5;
}

if(valor>=2)
{
nn2 = valor / 2;
valor = valor % 2;
}

if(valor>=1)
{
nn1 = valor / 1;
valor = valor % 1;
}


printf("notas usadas: \n");	
	printf("%d notas de cem \n", nn7);
	printf("%d notas de cinquenta \n", nn6);
	printf("%d notas de vinte \n", nn5);
	printf("%d notas de dez \n", nn4);
	printf("%d notas de cinco \n", nn3);
	printf("%d notas de dois \n", nn2);
	printf("%d notas de um \n", nn1);
		
return 0;
}

