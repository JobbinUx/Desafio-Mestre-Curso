#include <stdio.h>

#define TORRE_PASSOS 3
#define BISPO_PASSOS 3
#define RAINHA_PASSOS 3
#define CAVALO_PASSOS 1 

void moverTorreCima(int passos) {
    if (passos <= 0) return;
    printf("Torre: Cima\n");
    moverTorreCima(passos - 1);
}

void moverTorreBaixo(int passos) {
    if (passos <= 0) return;
    printf("Torre: Baixo\n");
    moverTorreBaixo(passos - 1);
}

void moverTorreDireita(int passos) {
    if (passos <= 0) return;
    printf("Torre: Direita\n");
    moverTorreDireita(passos - 1);
}

void moverTorreEsquerda(int passos) {
    if (passos <= 0) return;
    printf("Torre: Esquerda\n");
    moverTorreEsquerda(passos - 1);
}

void moverBispoDiagonal(int passos, const char* direcao) {
    if (passos <= 0) return;
    printf("Bispo: %s\n", direcao);
    moverBispoDiagonal(passos - 1, direcao);
}

void moverRainhaCima(int passos) {
    if (passos <= 0) return;
    printf("Rainha: Cima\n");
    moverRainhaCima(passos - 1);
}

void moverRainhaBaixo(int passos) {
    if (passos <= 0) return;
    printf("Rainha: Baixo\n");
    moverRainhaBaixo(passos - 1);
}

void moverRainhaDireita(int passos) {
    if (passos <= 0) return;
    printf("Rainha: Direita\n");
    moverRainhaDireita(passos - 1);
}

void moverRainhaEsquerda(int passos) {
    if (passos <= 0) return;
    printf("Rainha: Esquerda\n");
    moverRainhaEsquerda(passos - 1);
}

void moverRainhaDiagonal(int passos, const char* direcao) {
    if (passos <= 0) return;
    printf("Rainha: %s\n", direcao);
    moverRainhaDiagonal(passos - 1, direcao);
}

void moverCavalo(int passos) {
    int movimentosVerticais[2] = {2, 0};
    int movimentosHorizontais[1] = {1};

 for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            if (movimentosVerticais[i] == 0) continue;
            printf("Cavalo: Cima %d casas\n", movimentosVerticais[i]);
            printf("Cavalo: Direita %d casa(s)\n", movimentosHorizontais[j]);
            break;
        }
    }
}
