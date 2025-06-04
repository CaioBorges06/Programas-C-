#include<stdio.h>

int main()
{
	int acumulador, valorlido;
	acumulador = 0;
	int contador;
	
	for (contador = 1 ; contador <= 3; contador++){
		
		printf("Informe um valor numerico %d \n",contador);
	scanf("%d",&valorlido);
	acumulador = acumulador + valorlido;
	}
	
	printf("Valor final do contador apos terminar d: \n",contador);
	printf("Valor final acumulado %d: \n",acumulador);
	system("PAUSE");
}
