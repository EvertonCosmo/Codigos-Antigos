/*PROGRAMA MÉDIA PONDERADA*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3;
	float peso1,peso2,peso3;
	float somaPesos,notas,mediaPonderada;
	printf("NOTA 1 : ");
	scanf("%f",&nota1);
	printf("PESO 1 :");
	scanf("%f",&peso1);
	
	printf("\nNOTA 2 : ");
	scanf("%f",&nota2);
	printf("PESO 2 :");
	scanf("%f",&peso2);
	
	printf("\nNOTA 3 : ");
	scanf("%f",&nota3);
	printf("PESO 3 :");
	scanf("%f",&peso3);
	
	somaPesos = peso1+peso2+peso3;
	notas = (nota1*peso1)+(nota2*peso2)+(nota3*peso3);
	mediaPonderada = notas/somaPesos;
	
	printf("Média Ponderada: %f\n ",mediaPonderada);
	
	system("pause");
	
	
	
}
