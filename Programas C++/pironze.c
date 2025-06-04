#include <stdio.h>
int main()
{
	int individuo = 0;
	int idade;
	int acumulador = 0;
	
	while (individuo <= 5){
		
		printf("Digite sua idade: ",idade);
	scanf("%d",&idade);
		individuo = individuo + 1;
		acumulador = acumulador + idade;
		
		printf("Voce tem %d de idade \n",acumulador);
		if (idade <=17)
		printf ("Voce e menor de idade \n");
		else 
		if(idade>=18)
		printf  ("Voce e maior de idade\n");
	
	}
	
}
