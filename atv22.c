#include<stdio.h>
#include<stdlib.h>
int main(){
 int numero, modulo;	
	
printf("Digite um numero qualquer: \n");	
	scanf("%d", &numero);
	
if(numero >=0)
{	
printf("modulo do numero : %d", numero);	
return 0;	
} 
	else if(numero <0)
	{ 	
	modulo = numero *(-1);
	printf("modulo do numero : %d", modulo);
	return 0;
	}
}
