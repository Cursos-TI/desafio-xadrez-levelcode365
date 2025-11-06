#include <stdio.h>
// Autor : Nicolas Felipe
// Data  : 06/11/2025
// ------------------------------------------
// Funções recursivas para Torre, Bispo e Rainha
// ------------------------------------------

// TORRE: movimenta-se em linha reta (para a direita)
void moverTorre(int atual, int limite) {
    if (atual > limite) return; // caso base (fim da recursão)
    printf("Casa %d: Direita\n", atual);
    moverTorre(atual + 1, limite); // chamada recursiva
}

// BISPO: movimenta-se em diagonal (cima e direita)
// Implementa recursão com loops aninhados
void moverBispo(int vertical, int limite) {
    if (vertical > limite) return; // fim da recursão externa

    for (int horizontal = 1; horizontal <= limite; horizontal++) {
        printf("Posição [%d,%d]: Cima, Direita\n", vertical, horizontal);
    }

    moverBispo(vertical + 1, limite); // recursão vertical
}

// RAINHA: movimenta-se em qualquer direção (aqui: para a esquerda)
void moverRainha(int atual, int limite) {
    if (atual > limite) return;
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(atual + 1, limite);
}

// CAVALO: movimenta-se em “L” (duas casas para cima, uma para a direita)
void moverCavalo() {
    printf("\n=== Movimento do CAVALO ===\n");

    // loops aninhados (duas para cima, uma para a direita)
    for (int i = 1; i <= 2; i++) {  // movimento vertical
        for (int j = 1; j <= 3; j++) {  // movimento horizontal
            if (j == 2) {
                // posição inválida no “L” — pula
                continue;
            }

            printf("Movimento %d,%d: ", i, j);
            if (i == 2 && j == 3) {
                printf("Cima, Direita (movimento completo em L)\n");
                break; // fim do movimento em “L”
            } else {
                printf("Cima\n");
            }
        }
    }
}

int main() {
    printf("=== Movimento da TORRE ===\n");
    moverTorre(1, 5);

    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(1, 3);

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(1, 8);

    moverCavalo();

    printf("\nSimulação concluída!\n");
    return 0;
}
