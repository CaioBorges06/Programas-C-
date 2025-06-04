#include<stdio.h>

#define limite 5 
int matrizvalores[limite]={7,8,9,8,8};


int main()

{
	
	int soma = 0; // precisa zerar o cálculo pra não pegar lixo da memória
	soma = matrizvalores[1] + matrizvalores[4];
	printf("Valor final: %d \n",soma);
	
	system("PAUSE");
	return 0;
	
}
