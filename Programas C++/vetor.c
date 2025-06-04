#include<stdio.h>

int main()

{
	
	int vetor[4];// oq está dentro do veotor [] é o indice - guarda uma coleção de interios
	
	printf("Digite um numero qualquer: ");
	scanf("%d",&vetor[0]); // o indice comeca em 0
	printf("Digite um númeo qualquer: ");
	scanf("%d",&vetor[1]);
		printf("Digite um númeo qualquer: ");
	scanf("%d",&vetor[2]);
		printf("Digite um númeo qualquer: ");
	scanf("%d",&vetor[3]);
	printf("\n");
	
	printf("Numeroescolhido %d\n ",vetor[0]);
		printf("Numeroescolhido %d\n ",vetor[1]);
			printf("Numeroescolhido %d\n ",vetor[2]);
				printf("Numeroescolhido %d\n ",vetor[3]);
				system("PAUSE");
	
	
}
