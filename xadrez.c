#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int j = 0;
    int k = 0;

    // Implementação de Movimentação do Bispo usando while
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    while (j < 5){

        printf("Cima Direita \n");
        j++;
    }

    // Implementação de Movimentação da Torre usando for
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    for(int i = 0; i < 5; i++){

        printf("Direita \n");
    }

    // Implementação de Movimentação da Rainha usando do-while
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    do{
        printf("Esquerda \n");
        k++;
    } while(k < 8);

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
