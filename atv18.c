#include<stdlib.h>
#include<stdio.h>	
	
int main(){
	int n1, n2, n3;	
	
printf("digite um valor \n");
	scanf("%d", &n1);	
	
printf("digite um segundo valor \n");	
	scanf("%d", &n2);
	
n3 = n1;
n1 = n2;
n2 = n3;
	
printf("a permutação desses dois valores é %d (valor 1) e %d (valor 2) \n ", n1, n2);	
	
return 0;		
}
