#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#define bispo_movimento 5
#define torre_movimento 5
#define rainha_movimento 8
//movimento do cavalo adicionado
#define cavalo_movimento 1

// movimento diagonal bispo
void movebispo(int movimento) {
    if (movimento == 0)
    return;

    //loop aninhado
    for (int i = 0; i < 1; i++) {
        printf("cima\n");
        for (int j = 0; j < 1; j++) {
            printf("direita\n");
        }
    }
    
    movebispo ( movimento - 1);
}

void movetorre (int movimento) {
    if (movimento == 0)
    return;

    printf("direita\n");
    movetorre(movimento - 1);
}

void moverainha (int movimento) {
    if (movimento == 0)
    return;

    printf("esquerda\n");
    moverainha(movimento - 1);
}

void movecavalo() {
    printf("movimento do cavalo:\n");

    int cima = 0, direita = 0;
    int maximo_cima = 2, maximo_direita = 1;

    for (int i = 0; i < 3; i++) {
        if (cima < maximo_cima) {
            cima++;
            printf( "cima\n" );
            continue;
        }

        if (direita < maximo_direita) {
            direita++;
            printf ( "direita\n");
        }

        //para o loop quando o movimento do cavalo termina

        if (cima == maximo_cima && direita == maximo_direita) {
            break;
        }
    }
    printf ("***********************\n");

}


int main() {

    printf("***********************\n");

    printf(" movimento do bispo:\n");
    movebispo (bispo_movimento);
    printf("***********************\n");

    printf("movimento da torre:\n");
    movetorre (torre_movimento);
    printf ("***********************\n");

    printf("movimento rainha:\n");
    moverainha (rainha_movimento);
    printf ("***********************\n");


    movecavalo();
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    //Bispo se movimenta uma casa por vez até alcançar a posição determinada em define
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

   
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
  
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
