#include<stdio.h>

int main()

{
	int contador, valorlido;
	int maior, menor;
	int quant;
	maior = 0;
	menor = 0;
	printf("Quantos individuos vao participar da pesquisa? \n");
	scanf("%d",&quant);
	
	for (contador = 1; contador <= quant; contador++)
	{
		printf("quantos anos a pessoa %d tem? \n",contador);
		scanf("%d",&valorlido);
		
		if (valorlido > 17)
	maior = maior + 1;
	
	if (valorlido < 17)
	menor = menor + 1;
	}
	
	
	
	
	printf("A quantidade de pessoas maiores de idade foram de: %d \n",maior);
		printf("A quantidade de pessoas menores de idade foram de: %d \n",menor);
		system("PAUSE");
}
