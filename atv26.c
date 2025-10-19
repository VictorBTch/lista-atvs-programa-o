#include<stdlib.h>
#include<stdio.h>
int main(){
	int n1, n2, n3, soma;	
	
printf("insira o primeiro numero: \n");	
	scanf("%d", &n1);
printf("insira o segundo numero: \n");	
	scanf("%d", &n2);	
printf("insira o terceiro numero: \n");	
	scanf("%d", &n3);	
	
if(n1 >= n2 && n2 >= n3 || n2 >= n1 && n1 >= n3)
{	
soma = n1+n2;	
printf("a soma dos dois maiores numeros e: %d", soma);	
}
else if(n1 >= n3 && n3 >= n2 || n3 >= n1 && n1 >= n2)	
{
soma = n1+n3;
printf("a soma dos dois maiores numeros e: %d", soma);
}	
else if(n2 >= n3 && n3 >= n1 || n3 >= n2 && n2 >= n1)
{
soma = n2+n3;
printf("a soma dos dois maiores numeros e: %d", soma);
}
return 0;	
}
