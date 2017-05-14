#include <stdlib.h>
#include <stdio.h>

int main(){
	int data,anoAtual,idade;
	printf("Data de nascimento: ");
	scanf("%d",&data);
	printf("Ano atual: ");
	scanf("%d",&anoAtual);
	idade = anoAtual-data;
	printf("Sua idade eh: %d\n",idade);
	idade = 2050 - data;
	printf("Sua idade em 2050: %d\n",idade);
	system("pause");
	
}
