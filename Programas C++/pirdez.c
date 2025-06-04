#include<stdio.h>
int main()
{
	int contador = 7 ;
	
	while (contador >= 0 ){
		printf ("Valor gerado %d \n", contador);
		contador = contador - 1; // decresce
	}
	printf("Valor ao terminar %d: \n",contador);
	system("PAUSE");
}
