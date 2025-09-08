#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#define bispo_movimento 5
#define torre_movimento 5
#define rainha_movimento 8

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    //Bispo se movimenta uma casa por vez até alcançar a posição determinada em define
    printf ("movimento do bispo:\n");
    for (int i = 0; i < bispo_movimento; i++){
        printf("cima\n");
        printf("direita\n");
    }

    //espaço vago para legibilidade
    printf("***********************\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("movimento da torre para a direita:\n");
    for (int i = 0; i < torre_movimento; i++) {
        printf("direita\n");
    }
    
    printf("***********************\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("movimento da rainha para a esquerda:\n");
    for (int i = 0; i <rainha_movimento; i++) {
        printf("esquerda\n");
    }

    printf ("***********************\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
