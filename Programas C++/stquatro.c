struct livro{
	char titulo[30];
	int registronumerico;
};

struct classificarlivros{
	struct livro computacao;
	struct livro romance;
};

struct classificarlivros b = {{"Java como programar",10},{"Helena",20}}; //escreve o titulo e em seguida cm a virgula, o registro 

main()

{
	
	printf("Livros: \n");
	printf("computacao: \n");
	printf("Titulo: %s \n",b.computacao.titulo);
	printf("Registo numerico: %d \n",b.computacao.registronumerico);
	printf("Romance: \n");
	printf("Título: %s \n",b.romance.titulo);
	printf("Registo numerico: %d \n",b.romance.registronumerico);
	system("PAUSE");
}
