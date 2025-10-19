#include<stdlib.h>
#include<stdio.h>
int main(){
	int n1, n2, n3, maior;	
	float media, mult;
	
printf("digite o primeiro numero; \n");	
	scanf("%d", &n1);
printf("digite o segundo numero; \n");	
	scanf("%d", &n2);	
printf("digite o terceiro numero; \n");	
	scanf("%d", &n3);	
	
if(n1 <= n2 && n2 <= n3 || n2 <= n1 && n1 <= n3)
{	
mult = (n1 + n2)*2.5;	
maior = n3*5;	
media = (mult + maior)/10.0;	
printf("a media ponderada desses valores e: %.2f", media);	
}
else if(n1 <= n3 && n3 <= n2 || n3 <= n1 && n1 <= n2)
{	
mult = (n1 + n3)*2.5;	
maior = n2*5;	
media = (mult + maior)/10.0;	
printf("a media ponderada desses valores e: %.2f", media);	
}	
else if(n2 <= n3 && n3 <= n1 || n3 <= n1 && n1 <= n2)
{	
mult = (n2 + n3)*2.5;	
maior = n1*5;	
media = (mult + maior)/10.0;	
printf("a media ponderada desses valores e: %.2f", media);	
}	
return 0;	
}
