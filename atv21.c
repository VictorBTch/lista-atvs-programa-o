#include<stdlib.h>
#include<stdio.h>
int main(){
	int numero;	
	
printf("Digite um numero(negativo ou positivo) \n");	
	scanf("%d", &numero);
	
if(numero >= 1)	
{
printf("Seu numero e positivo \n");	
return 0;	
}
	else if(numero < 1)
	{	
	printf("Seu numero e negativo \n");
	return 0;
	}
if(numero == 0)	
{
printf("Numero invalido \n");	
return 0;	
}			
}
