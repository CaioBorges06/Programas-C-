#include<stdio.h>

int main()

{
	
	int vetor[5];
	int referencia;
	
	for (referencia = 0; referencia < 5; referencia++)
	{
	
		printf("Digite qualquer valor %d \n",referencia);
		scanf("%d",&vetor[referencia]);
	
	}
	
	printf("\n");
	printf("numero escolhido %d\n",vetor[0]);
		printf("numero escolhido %d\n",vetor[1]);
			printf("numero escolhido %d\n",vetor[2]);
				printf("numero escolhido %d\n",vetor[3]);
					printf("numero escolhido %d\n",vetor[4]);
					system("PAUSE");




	
}
