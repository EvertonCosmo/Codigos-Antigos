#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor, quadrado,cubo;
	float raiz;
	printf("(NUMERO MAIOR QUE ZERO)\n\n");
	
	printf("Digite um valor:  ");
	scanf("%d",&valor);
	
	quadrado = valor*valor;
	printf("O n�mero %d ao quadrado �: %d\n",valor,quadrado);
	
	cubo = valor*valor*valor;
	printf("O n�mero %d ao cubo �: %d\n",valor,cubo);
	
	raiz=sqrt(valor);
	printf("A raiz quadrada de %d �: %f\n",valor,raiz);
	
	system("pause");
	
}
