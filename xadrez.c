#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez
    Autor: Nicolas Felipe
    Descrição:
        Este programa simula o movimento de quatro peças do xadrez:
        Torre, Bispo, Rainha e Cavalo.
        - Torre: move-se 5 casas para a direita (usando FOR)
        - Bispo: move-se 5 casas na diagonal (usando WHILE)
        - Rainha: move-se 8 casas para a esquerda (usando DO-WHILE)
        - Cavalo: move-se duas casas para baixo e uma para a esquerda (usando FOR + WHILE aninhados)

        O objetivo é demonstrar o uso das estruturas de repetição:
        for, while e do-while, inclusive de forma aninhada.
*/

int main() {
    // -------------------------------
    // TORRE: Movimento com estrutura FOR
    // -------------------------------
    int i;
    int casas_torre = 5; // quantidade de casas que a torre irá se mover

    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // -------------------------------
    // BISPO: Movimento com estrutura WHILE
    // -------------------------------
    int j = 1;
    int casas_bispo = 5; // quantidade de casas que o bispo irá se mover

    printf("\n=== Movimento do BISPO ===\n");
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
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casas_rainha);

    // -------------------------------
    // CAVALO: Movimento com loops aninhados (FOR + WHILE)
    // -------------------------------
    int movimentos_baixo = 2;  // número de casas para baixo
    int movimentos_esquerda = 1; // número de casas para a esquerda
    int x, y; // variáveis de controle

    printf("\n=== Movimento do CAVALO ===\n");

    // Loop externo (FOR): duas casas para baixo
    for (x = 1; x <= movimentos_baixo; x++) {
        printf("Baixo\n");
        
        // Loop interno (WHILE): depois das duas casas, faz uma para esquerda
        if (x == movimentos_baixo) {
            y = 1;
            while (y <= movimentos_esquerda) {
                printf("Esquerda\n");
                y++;
            }
        }
    }

    printf("\nSimulação concluída!\n");

    return 0;
}
