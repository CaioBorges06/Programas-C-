#include<stdio.h>

int main()

{
	
	int qnt;
	float nota[4];
	int nmr =1;
	
	for (qnt = 0; qnt <= 4; qnt++){
		
		printf("Qual a nota da prova %d ? \n",nmr);
		scanf("%f",&nota[qnt]);
		printf("Sua nota foi %2.2f \n",nota[qnt]);
		printf("\n");
			nmr = nmr + 1;
	 
	}
	
	system("PAUSE");



	
}
