#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Funções do Bispo

    void moverBispo (int casas){

        if (casas > 0){

            for(int i = 0; i < 1; i++){

                int j = 0;

                while(j < 1){

                    printf("Cima Direita \n");

                    j++;
                }
            }
            moverBispo(casas - 1);
        }
    }

    // Funções da Torre

    void moverTorre (int casas){

        if(casas > 0){

            printf("Direita \n");

            moverTorre (casas -1);
        }
    }

    // Funções da Rainha

    void moverRainha (int casas) {

        if(casas > 0) {

            printf("Esquerda \n");

            moverRainha(casas - 1);
        }
    }


int main() {

    moverBispo(5);
    printf("\n");

    moverTorre(5);
    printf("\n");

    moverRainha(8);
    printf("\n");

    // Movimentação do Cavalo

    for(int i = 0, j = 0; i < 3 && j < 3; i++, j++) {

        if(i == 2){
            continue;
        }
        printf("Cima \n");
    }
    printf("Direita \n");
    
    return 0;
}
