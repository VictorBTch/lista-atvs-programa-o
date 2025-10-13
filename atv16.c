#include<stdlib.h>
#include<stdio.h>

	int main(){
int numero, centena, dezena, unidade, numeroinv;		
	
	printf("Digite um numero de ate 3 digitos \n");
scanf("%d", &numero);		
		
centena = (numero/100);	
dezena = (numero/10)%10;		
unidade = (numero%10);		
numeroinv = (unidade*100) + (dezena*10) + (centena);
	
if(numero >= 1000)
{
printf("numero invalido \n");
return 0;
}	
	else if(numero <=999)
	{
	printf("numero digitado invertido: %d", numeroinv);
	}				
return 0;						
}
