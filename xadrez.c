#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez
    Autor: Nicolas Felipe
    Descrição:
        Este programa simula o movimento de três peças do xadrez:
        Torre, Bispo e Rainha.
        - Torre: move-se 5 casas para a direita (usando FOR)
        - Bispo: move-se 5 casas na diagonal (usando WHILE)
        - Rainha: move-se 8 casas para a esquerda (usando DO-WHILE)

        O objetivo é demonstrar o uso das estruturas de repetição:
        for, while e do-while.
*/

int main() {
    // -------------------------------
    // TORRE: Movimento com estrutura FOR
    // -------------------------------
    int i;
    int casas_torre = 5; // quantidade de casas que a torre irá se mover

    printf("=== Movimento da TORRE ===\n");
    // Torre move-se em linha reta — neste caso, 5 casas para a direita
    for (i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // -------------------------------
    // BISPO: Movimento com estrutura WHILE
    // -------------------------------
    int j = 1;
    int casas_bispo = 5; // quantidade de casas que o bispo irá se mover

    printf("\n=== Movimento do BISPO ===\n");
    // Bispo move-se na diagonal — aqui: 5 casas para cima e à direita
    while (j <= casas_bispo) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    // -------------------------------
    // RAINHA: Movimento com estrutura DO-WHILE
    // -------------------------------
    int k = 1;
    int casas_rainha = 8; // quantidade de casas que a rainha irá se mover

    printf("\n=== Movimento da RAINHA ===\n");
    // Rainha move-se em qualquer direção — aqui: 8 casas para a esquerda
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casas_rainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
