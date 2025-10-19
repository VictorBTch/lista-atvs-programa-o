#include<stdlib.h>
#include<stdio.h>
int main(){
	char vogal, consoante, letra;	
	
printf("digite uma letra: \n");	
	scanf(" %c", &letra);
	
if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')	
printf("letra digitada e vogal.");	
	else 
	printf("letra digitada e consoante");	
}
