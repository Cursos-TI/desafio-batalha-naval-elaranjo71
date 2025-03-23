#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Declare uma matriz.
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    //incicalizando o tabuleiro
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Posicionando os navios
    //Navio 1
    tabuleiro[2][3] = 3, tabuleiro[2][4] = 3, tabuleiro[2][5] = 3;
    //Navio 2
    tabuleiro[5][7] = 3, tabuleiro[6][7] = 3, tabuleiro[7][7] = 3;
    
    //Criando o cabeçalho (colunas) do tabuleiro
    printf("»»» BATALHA NAVAL «««\n");
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("  %c", linha[i]);
    }

    //Exibindo tabuleiro com os navios
    for(int i = 0; i < 10; i++ ){
        printf("\n");
        printf("%d", i);
        for(int j = 0; j < 10; j ++){
            printf(" ");
            printf("%d ", tabuleiro[i][j]);
        }
    }

    printf("\n");
    
    return 0;
}
