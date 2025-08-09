#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação do movimento da Torre
    // -------------------------------
    // A Torre move-se em linha reta horizontal ou vertical.
    // Neste caso, ela vai se mover 5 casas para a DIREITA.
    
    int casasTorre = 5; // Número de casas que a Torre vai se mover
    printf("Movimento da Torre:\n");

    // Estrutura de repetição: FOR
    // Usamos o FOR porque sabemos exatamente quantas vezes a Torre vai se mover
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção de cada movimento
    }

    // Linha em branco para separar as saídas
    printf("\n");

    // -------------------------------
    // Simulação do movimento do Bispo
    // -------------------------------
    // O Bispo move-se na diagonal.
    // Neste caso, ele vai se mover 5 casas na diagonal para CIMA e à DIREITA.
    
    int casasBispo = 5; // Número de casas que o Bispo vai se mover
    int contadorBispo = 0; // Contador para controlar o número de repetições
    printf("Movimento do Bispo:\n");

    // Estrutura de repetição: WHILE
    // Usamos WHILE para repetir enquanto uma condição for verdadeira
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n"); // Combinação das direções do movimento na diagonal
        contadorBispo++; // Incrementa o contador
    }

    // Linha em branco para separar as saídas
    printf("\n");

    // --------------------------------
    // Simulação do movimento da Rainha
    // --------------------------------
    // A Rainha move-se em todas as direções.
    // Neste caso, ela vai se mover 8 casas para a ESQUERDA.
    
    int casasRainha = 8; // Número de casas que a Rainha vai se mover
    int contadorRainha = 0; // Contador para o loop
    printf("Movimento da Rainha:\n");

    // Estrutura de repetição: DO-WHILE
    // Usamos DO-WHILE porque queremos garantir que o bloco será executado pelo menos uma vez
    do {
        printf("Esquerda\n"); // Imprime a direção de cada movimento
        contadorRainha++; // Incrementa o contador
    } while (contadorRainha < casasRainha); // Verifica a condição ao final do loop

    return 0; // Fim do programa
}
