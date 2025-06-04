#include<stdio.h>

int main ()

{
	int qnt = 5;
	float nota[2];
	int nmr = 1;
	
	for(qnt = 0; qnt <= 2; qnt++){
		
		printf("Quanto tirou na prova %d? \n",nmr);
		scanf("%f",&nota[qnt]);	
		nmr = nmr + 1;
		
	}
	
	printf("Sua nota da nota 1 foi %2.2f \n",nota[0]);
		printf("Sua nota da nota 2 foi %2.2f \n",nota[1]);
			printf("Sua nota da nota 3 foi %2.2f \n",nota[2]);
			
}
