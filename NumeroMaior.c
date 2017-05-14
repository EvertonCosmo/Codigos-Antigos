#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int elevado,numero1,numero2;
	printf("\t Obs:NUMEROS MAIORES QUE 0\n\n");
	
	printf("Digite um número: ");
	scanf("%d",&numero1);
		if(numero1 ==0 || numero1 < 0){
			printf("Não podemos calcular com números negativo!\n");
		}
	printf("Digite outro: ");
	scanf("%d",&numero2);
		if(numero2 ==0 || numero2 < 0){
			printf("Não podemos calcular com números negativos!\n");
		}
	elevado = pow(numero1,numero2);
	printf("%d elevado a %d é %d",numero1,numero2,elevado);
	system("pause");
	return 0;
	
}


