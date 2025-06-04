#include<stdio.h>

int main ()
{
	//FLOAT MEDIA();
	printf("Calculo \n");
	media();
	system("PAUSE");
}

    media ()
    {
    	float final, recebesoma;
    	recebesoma = soma();
    	final = recebesoma/2;
    	printf("Resposta final: %2.2f \n", final);
	}
	
	soma()
	{
		float numeroum, numerodois;
		printf("Media entre dois valores: \n");
			printf("Digite um numero: \n");
			scanf("%f",&numeroum);
				printf("Digite um segundo numero: \n");
				scanf("%f",&numerodois);
				return numeroum + numerodois;
				
			
	}
