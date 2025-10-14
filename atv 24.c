#include<stdlib.h>
#include<stdio.h>
int main(){
	int n1, n2, n3, maior1, maior2;	
	
printf("Digite o primeiro numero: \n");	
	scanf("%d", &n1);
printf("Digite o segundo numero: \n");	
	scanf("%d", &n2);
printf("Digite o terceiro: \n");	
	scanf("%d", &n3);
			
if(n1 >= n2 && n1 >= n3)	
{
maior1 = n1;	
	if(n2 > n3)
	maior2 = n2;
		else
		maior2 = n3;
}
else if(n3 >= n1 && n3 >= n2)	
{
maior1 = n3;	
	if(n2 > n1)
	maior2 = n2;
		else
		maior2 = n1;
}
else if(n2>= n3 && n2>= n1)
{

maior1 = n2;	
	if(n1 > n3)
	maior2 = n1;
		else
		maior2 = n3;
}
printf("Os maiores numeros sao: %d, %d", maior1, maior2);
}	


