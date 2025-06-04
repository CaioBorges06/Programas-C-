#include <stdio.h>
int main()
{
	int acumulador = 0 , valorlido= 0;
	int contador = 1;
	
	while (contador <= 4){
		printf("Informe um valor numerico %d \n", contador);
		scanf("%d", &valorlido);
		acumulador = acumulador + valorlido;
		contador = contador + 1;
	}
	
	printf("Valor final do contador ao terminar %d: \n",contador);
	printf("Valor final acumulado %d \n",acumulador);
	system("PAUSE");
}
