#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero,i,fat;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	for(i=1; i<=numero; i++){
	
			fat = fat * i;
		
	}
	
	printf("Fatorial de %d: %d\n ",numero,fat);
	
	system("pause");
}
