#include<stdlib.h>
#include<stdio.h>
int main(){
	int mes, ano, bissexto;	
	
printf("Digite o numero referente ao mes escolhido: \n 1.janeiro \n 2.fevereiro \n 3.marco \n 4.abril \n 5.maio \n 6.junho \n 7.julho \n 8.agosto \n 9.setembro \n 10.outubro \n 11.novembro \n 12.dezembro \n");	
	scanf("%d", &mes);

printf("Digite o ano referente ao mes \n");
	scanf("%d", &ano);

if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    bissexto = 1;
	else	
	bissexto = 0;
		
if(mes == 1)
printf("janeiro tem 31 dias.");

if(mes == 2 && bissexto == 1)
printf("ano bissexto: fevereiro tem 29 dias");
	else if(mes == 2 && bissexto == 0)
	printf("ano nao bissexto: fevereiro tem 28 dias");
	
if(mes == 3)
printf("marco tem 31 dias.");
	
if(mes == 4)
printf("abril tem 30 dias.");	
	
if(mes == 5)
printf("maio tem 31 dias.");	
	
if(mes == 6)
printf("junho tem 30 dias.");	
	
if(mes == 7)
printf("julho tem 31 dias.");	
	
if(mes == 8)
printf("agosto tem 31 dias.");	
	
if(mes == 9)
printf("setembro tem 30 dias.");	
	
if(mes == 10)
printf("outubro tem 31 dias.");	
	
if(mes == 11)
printf("novembro tem 30 dias.");	

if(mes == 12)
printf("dezembro tem 31 dias.");

return 0;	
}
