#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    // Inicialização do cabeçalho
    char linha[11] = {'#', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Inicializando a matriz
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // 
        }
    }

    // Imprimindo o cabeçalho
    printf(" ");
    for (int x = 0; x < 11; x++){
        printf("%c ", linha[x]);
    }
    printf("\n");
    
    // Acertando os navios
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;
    tabuleiro[1][5] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[9][2] = 3;

    // Imprimindo o tabuleiro
    for (int i = 0; i < 10; i++) {
        if (i >= 9){
            printf("%d ", i+1);
        } else {
            printf(" %d ", i+1);
        }
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
