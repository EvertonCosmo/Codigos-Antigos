/*Usando vetores*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pular "\n"
int main(){
	
	int codCidade[5],numVeiculos[5],acidentesV[5],i;
	float mediaVeiculos = 0;
	
	
	setlocale(LC_ALL,"Portuguese");
	
	/*
	printf("C�digo da cidade : ");
	scanf("%d",&codCidade);
	
	printf("N�mero de ve�culos de passeio : ");
	scanf("%d",&numVeiculos);
	
	//numero de acidentes de tr�nsito com v�timas 
	
	printf("N�mero de acidentes(Com v�timas) : ");
	scanf("%d",&acidentesV);
	

	
	if(acidentesV)
	*/
	
	for(i=1; i<=5; i++){
		
		
		printf("Digite o c�digo da cidade %d : ",i);
		
		
		scanf("%d",&codCidade[i]);
	
		printf("N�mero de ve�culos de passeios %d : ",i);
		
		scanf("%d",&numVeiculos[i]);
		
		printf("N�mero de acidentes(Com v�timas) : ");
		scanf("%d",&acidentesV[i]);
		
		
			printf(pular);
		
		}
/*	printf("Codes:\n %d\n %d\n %d\n %d\n %d\n",codCidade[1],codCidade[2],codCidade[3],codCidade[4],codCidade[5]);
	printf("Codes:\n %d\n %d\n %d\n %d\n %d\n",numVeiculos[1],numVeiculos[2],numVeiculos[3],numVeiculos[4],numVeiculos[5]);
	printf("Codes:\n %d\n %d\n %d\n %d\n %d\n",acidentesV[1],acidentesV[2],acidentesV[3],acidentesV[4],acidentesV[5]);	
*/	
	
	
	
		//qual o maior e menor indices de aci..  transito, e qual cidades pertecem
		
		//Maior valor
		if(acidentesV[1] > acidentesV[2] && acidentesV[1] > acidentesV[3] &&  acidentesV[1] > acidentesV[4] && acidentesV[1] > acidentesV[5]){
			
			printf("O valor maior de acidentes foi : %d\n",acidentesV[1]);
			
			printf("CIDADE C�DIGO: %d\n",codCidade[1]);
			
	}else 	if(acidentesV[2] > acidentesV[1] && acidentesV[2] > acidentesV[3] &&  acidentesV[2] > acidentesV[4] && acidentesV[2] > acidentesV[5]){
		
			printf("O valor maior de acidentes foi : %d\n",acidentesV[2]);
			
			printf("CIDADE C�DIGO: %d\n",codCidade[2]);
				
	}else 	if(acidentesV[3] > acidentesV[1] && acidentesV[3] > acidentesV[2] &&  acidentesV[3] > acidentesV[4] && acidentesV[3] > acidentesV[5]){
		
			printf("O valor maior de acidentes foi : %d\n",acidentesV[3]);
			
			printf("CIDADE C�DIGO: %d\n",codCidade[3]);
			
	}else 	if(acidentesV[4] > acidentesV[1] && acidentesV[4] > acidentesV[3] &&  acidentesV[4] > acidentesV[2] && acidentesV[4] > acidentesV[5]){
		
			printf("O valor maior de acidentes foi : %d\n",acidentesV[4]);
			
			printf("CIDADE C�DIGO: %d\n",codCidade[4]);
			
	}else 	if(acidentesV[5] > acidentesV[1] && acidentesV[5] > acidentesV[3] &&  acidentesV[5] > acidentesV[4] && acidentesV[5] > acidentesV[2]){
		
			printf("O valor maior de acidentes foi : %d\n",acidentesV[5]);
			
			printf("CIDADE C�DIGO: %d\n",codCidade[5]);
	}else{
		printf("Todos os valores s�o iguais a : %d\n\n",acidentesV[1]);
	}
	
		//M�dia de ve�culos nas cidades:
		
		mediaVeiculos = ( numVeiculos[1] + numVeiculos[2] + numVeiculos[3] + numVeiculos[4]+ numVeiculos[5]) / 5;
		
		printf("M�dia de Carros nas 5 cidade : %f",mediaVeiculos);
		
		system("pause");
	
			
		
	
	
	
}
