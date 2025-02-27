#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças

int main() {
    //Rainha deve se mover para a esquerda oito vezes.
    int rainha = 0; //Inicialização da variável 'rainha'
    while (rainha<8){
        printf("Rainha move para a Esquerda.\n");//Execução
        rainha++; //Incrementação da rainha em 1.
    }
    //Bispo - cinco casas a direita, cima
    int bispo = 0; //Inicialização do 'bispo'
        do{
            printf("Bispo move a Cima, Direita(Diagonal direita).\n");//Execução 
            bispo++; //Incremento em 1
        } while (bispo<5);

    // Torre - cinco casas a direita.
        for (int torre = 0; torre < 5; torre++)// inicialização da variável, valor que deve executar e incremento.
        {
            printf("Torre move para a direita.\n"); //Execução
        }
 
    return 0;
}
