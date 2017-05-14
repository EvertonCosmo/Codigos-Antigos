#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float base,altura,area;
	
	printf("Digite o valor da base do triângulo: ");
	scanf("%f",&base);
	printf("Digite o valor da altura do triângulo: ");
	scanf("%f",&altura);
	//Área
	area = (base*altura)/2;
	printf("Área do triângulo: %.2f\n",area);
	system("pause");
	return 0;
	
}
