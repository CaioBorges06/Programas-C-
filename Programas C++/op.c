#include <stdio.h>
// Declaração das funções
void problema();
void parcela();
void avista();
// Variável para armazenar o custo do reparo
float custo;
int main() { // inicia o programa
printf("Bom dia/tarde/noite, somos o servico de assistencia tecnica CBV.\n"); //apresentação
printf("Trabalhamos com telas, conectores e baterias.\n");
problema(); // Chama a função problema
printf("Como haviamos dito, esse e o valor a vista. Voce tambem tem a opcao de parcelar em ate 4x.\n"); // informando as formas de pagamento
printf("A forma do seu pagamento e parcelado ou a vista?(p ou a) \n"); //perguntando a forma de pagamento
char forma; // gravando a forma de pagamento
scanf(" %c", &forma); // Corrigido para ler um caractere com espaço antes do %c
if(forma == 'a'){ //condição de forma de pagamentoa
avista(); // chamado da função a vista
}
else if(forma == 'p'){ //condição de forma de pagamento
parcela(); //chamado da função de parcela
}
else {
printf("Opcao invalida!\n"); // invalida o que está fora do plano de pagamento
}
return 0; // termina o código
}
void problema() { //função do problema
char defeito; // variável para armazenar o tipo de defeito
printf("Digite qual a parte do seu celular que esta com defeito (t - tela,c - conector,b - bateria): \n"); // pergunta da parte onde está com defeito
scanf(" %c", &defeito); // reconhecendo o defeito
// Comparação e atribuição do custo com base no defeito
if (defeito == 't') // 't' para tela
custo = 260.0;
else if (defeito == 'c') // 'c' para conector
custo = 180.0;
else if (defeito == 'b') // 'b' para bateria
custo = 200.0;
else {
printf("Opcao invalida!\n"); // Invalida a opção que não for a tela, conector ou bateria
return; // Encerra a função se a opção for inválida
}
printf("O custo do reparo, a vista, sera de: R$ %.2f.\n", custo); // Mostra o preço à vista para o cliente
}
void parcela() { //função parcela
int num_parcelas; // gravação do númmero de parcelas
printf("Quantas parcelas deseja fazer (ate 4)? \n"); //pergunta do número de parcelas
scanf("%d", &num_parcelas); // reconhecimento do número de parcelas
float custo_total; // gravação da variável do total a ser pago
if (num_parcelas >= 2 && num_parcelas <= 4) { // condição para as parcelas
custo_total = (custo / num_parcelas); // Calcula o custo total parcelado
printf("O custo total parcelado em %d vezes sera de: R$ %.2f.\n",
num_parcelas, custo_total); // informando o preço total do reparo
} else {
printf("Numero de parcelas invalido!\n"); // invalidando o número de parcelas
}
}
void avista() { // função a vista
printf("O pagamento a vista foi selecionado.\n"); //confirma o pagamento a vista
}
