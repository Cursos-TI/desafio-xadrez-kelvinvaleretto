#include <stdio.h>

// Função recursiva para mover a Torre para a Direita
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para mover a Rainha para a Esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para mover o Bispo (Diagonal Cima Direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para simular Bispo (Cima Direita)
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) { // vertical
        for (int j = 0; j < 1; j++) { // horizontal (1 passo por movimento)
            printf("Cima Direita\n");
        }
    }
}

// Função para simular movimento do Cavalo com loops complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas Cima, 1 Direita):\n");

    int movimentos = 1; // Quantas vezes queremos repetir esse movimento
    for (int m = 0; m < movimentos; m++) {
        int i = 0;

        // Duas casas para cima
        while (i < 2) {
            if (i == 1) {
                i++;
                printf("Cima\n");
                continue;
            }
            printf("Cima\n");
            i++;
        }

        // Uma casa para a direita
        for (int j = 0; j < 1; j++) {
            if (j > 0) break; // Apenas um passo
            printf("Direita\n");
        }
    }
}

int main() {
    // Quantidade de casas para cada movimento
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // ---------------- TORRE ----------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ---------------- BISPO ----------------
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo com loops aninhados
    moverBispoComLoops(casasBispo);

    // ---------------- RAINHA ----------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ---------------- CAVALO ----------------
    moverCavalo();

    return 0;
}
