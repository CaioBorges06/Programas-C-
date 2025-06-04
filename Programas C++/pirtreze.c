#include<stdio.h>
int main()
{
	int quant;
	int contador = 1;
	float valor;
	float acumulador = 0;
	float media;
	
	printf("Digite a quantidade de notas que ira compor a media do aluno: \n");
	scanf("%d",&quant);
	
	while(contador <= quant){
		
		printf("Digite o valor da prova : \n",valor);
		scanf("%f", &valor);
		acumulador = acumulador + valor;
		contador = contador + 1;
	}
	
	media = acumulador / quant;
	printf("Sua media final foi de %2.2f \n ",media);
	
	if (media >= 7){
		printf("Voce passou\n");
	}
	
	else 
	if (media >=4){
			printf("Voce esta de exame");
	}

	else 
	printf("Voce esta de DP");
}
