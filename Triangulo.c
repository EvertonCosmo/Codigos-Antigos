#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float base,altura,area;
	
	printf("Digite o valor da base do tri�ngulo: ");
	scanf("%f",&base);
	printf("Digite o valor da altura do tri�ngulo: ");
	scanf("%f",&altura);
	//�rea
	area = (base*altura)/2;
	printf("�rea do tri�ngulo: %.2f\n",area);
	system("pause");
	return 0;
	
}
