/*Primo*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero,mod1,i;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
		if(numero  > 1){
			for(i=1; i <=numero; i++){
				
				if(numero% i == 0){
					mod1++;
				}
				
			}
			if(mod1 == 2){
				printf("o numero eh primo\n");
				system("pause");
			}else{
				printf("o numero nao eh primo\n");
				system("pause");
			}
			
			
			
		}
		
			
			
		
		
		
		
		}
	

