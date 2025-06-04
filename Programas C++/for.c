#include<stdio.h>
int main()
{
	int contador;
	
	for(contador = 5; contador >= 1; contador--) //   (começa o contador; teste; encremento)
	printf("Valor gerado %d \n",contador);
	printf("Valor final apos terminar %d: \n",contador);
	system("PAUSE");
}
