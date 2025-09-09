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

void moverBispoLoops(int passos) {
    for (int vertical = 1; vertical <= passos; vertical++) {
        for (int horizontal = 1; horizontal <= passos; horizontal++) {
            printf("Bispo (loop): Cima e Direita - vertical %d, horizontal %d\n", vertical, horizontal);
        }
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    moverTorreCima(TORRE_PASSOS);
    moverTorreBaixo(TORRE_PASSOS);
    moverTorreDireita(TORRE_PASSOS);
    moverTorreEsquerda(TORRE_PASSOS);
    printf("\n");

    printf("Movimentos do Bispo (recursivo):\n");
    moverBispoDiagonal(BISPO_PASSOS, "Cima e Direita");
    moverBispoDiagonal(BISPO_PASSOS, "Cima e Esquerda");
    moverBispoDiagonal(BISPO_PASSOS, "Baixo e Direita");
    moverBispoDiagonal(BISPO_PASSOS, "Baixo e Esquerda");
    printf("\n");

    printf("Movimentos do Bispo (loops aninhados):\n");
    moverBispoLoops(BISPO_PASSOS);
    printf("\n");

    printf("Movimentos da Rainha:\n");
    moverRainhaCima(RAINHA_PASSOS);
    moverRainhaBaixo(RAINHA_PASSOS);
    moverRainhaDireita(RAINHA_PASSOS);
    moverRainhaEsquerda(RAINHA_PASSOS);
    moverRainhaDiagonal(RAINHA_PASSOS, "Cima e Direita");
    moverRainhaDiagonal(RAINHA_PASSOS, "Cima e Esquerda");
    moverRainhaDiagonal(RAINHA_PASSOS, "Baixo e Direita");
    moverRainhaDiagonal(RAINHA_PASSOS, "Baixo e Esquerda");
    printf("\n");

    printf("Movimentos do Cavalo:\n");
    moverCavalo(CAVALO_PASSOS);
    printf("\n");

    return 0;
}

//Funcionalidades ok