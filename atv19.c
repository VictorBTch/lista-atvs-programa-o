#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "");	
	float x, n1, n2, raiz, soma, subtracao, divisao, multiplicacao;		
	int operacao;	
	
printf("Digite a incognita da equacao: \n");		
	scanf("%f", &x);	
printf("Digite o primeiro valor apos a igualdade: \n");		
	scanf("%f", &n1);
printf("Digite o segundo valor: \n");		
	scanf("%f", &n2);	
		
soma = n1 + n2;		
subtracao = n1 - n2;
divisao = n1 / n2;		
multiplicacao = n1 * n2;		
		
printf("Digite qual a operacao utilizada nos valores:\n 1.soma \n 2.subtracao \n 3.divisao \n 4.multiplicacao \n (digite o numero) \n");		
	scanf("%d", &operacao);	
		
if(operacao == 1)
{		
raiz = soma/x;		
printf("O resultado da raiz e: %f", raiz);		
}
if(operacao == 2)
{		
raiz = subtracao/x;		
printf("O resultado da raiz e: %f", raiz);		
}		
if(operacao == 3)
{		
raiz = divisao/x;		
printf("O resultado da raiz e: %f", raiz);		
}		
if(operacao == 4)
{		
raiz = multiplicacao/x;		
printf("O resultado da raiz e: %.2f", raiz);		
}				
		
}
