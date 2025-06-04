#include <stdio.h>
// Declara��o das fun��es
void problema();
void parcela();
void avista();
// Vari�vel para armazenar o custo do reparo
float custo;
int main() { // inicia o programa
printf("Bom dia/tarde/noite, somos o servico de assistencia tecnica CBV.\n"); //apresenta��o
printf("Trabalhamos com telas, conectores e baterias.\n");
problema(); // Chama a fun��o problema
printf("Como haviamos dito, esse e o valor a vista. Voce tambem tem a opcao de parcelar em ate 4x.\n"); // informando as formas de pagamento
printf("A forma do seu pagamento e parcelado ou a vista?(p ou a) \n"); //perguntando a forma de pagamento
char forma; // gravando a forma de pagamento
scanf(" %c", &forma); // Corrigido para ler um caractere com espa�o antes do %c
if(forma == 'a'){ //condi��o de forma de pagamentoa
avista(); // chamado da fun��o a vista
}
else if(forma == 'p'){ //condi��o de forma de pagamento
parcela(); //chamado da fun��o de parcela
}
else {
printf("Opcao invalida!\n"); // invalida o que est� fora do plano de pagamento
}
return 0; // termina o c�digo
}
void problema() { //fun��o do problema
char defeito; // vari�vel para armazenar o tipo de defeito
printf("Digite qual a parte do seu celular que esta com defeito (t - tela,c - conector,b - bateria): \n"); // pergunta da parte onde est� com defeito
scanf(" %c", &defeito); // reconhecendo o defeito
// Compara��o e atribui��o do custo com base no defeito
if (defeito == 't') // 't' para tela
custo = 260.0;
else if (defeito == 'c') // 'c' para conector
custo = 180.0;
else if (defeito == 'b') // 'b' para bateria
custo = 200.0;
else {
printf("Opcao invalida!\n"); // Invalida a op��o que n�o for a tela, conector ou bateria
return; // Encerra a fun��o se a op��o for inv�lida
}
printf("O custo do reparo, a vista, sera de: R$ %.2f.\n", custo); // Mostra o pre�o � vista para o cliente
}
void parcela() { //fun��o parcela
int num_parcelas; // grava��o do n�mmero de parcelas
printf("Quantas parcelas deseja fazer (ate 4)? \n"); //pergunta do n�mero de parcelas
scanf("%d", &num_parcelas); // reconhecimento do n�mero de parcelas
float custo_total; // grava��o da vari�vel do total a ser pago
if (num_parcelas >= 2 && num_parcelas <= 4) { // condi��o para as parcelas
custo_total = (custo / num_parcelas); // Calcula o custo total parcelado
printf("O custo total parcelado em %d vezes sera de: R$ %.2f.\n",
num_parcelas, custo_total); // informando o pre�o total do reparo
} else {
printf("Numero de parcelas invalido!\n"); // invalidando o n�mero de parcelas
}
}
void avista() { // fun��o a vista
printf("O pagamento a vista foi selecionado.\n"); //confirma o pagamento a vista
}
