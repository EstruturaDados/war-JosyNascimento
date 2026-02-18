// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
#include <stdio.h>
#include <string.h>


// ==== Definições e constantes ====
#define QUANT_TERRITORIOS 5
#define TAM_NOME 30
#define TAM_COR 10

//1. ==== Struct ====
struct Territorio {
    char nome [TAM_NOME];
    char cor [TAM_COR];
    int tropas;

};

// ==== Função auxiliar para limpar o buffer ====
void limparbuffer() {
    int c;
    while ((c= getchar ()) != '\n' && c != EOF);
}

int main () {
    // estructura de dados composta===
    struct Territorio mapa[QUANT_TERRITORIOS];

    printf ("=== CADASTRO DE TERRITÓRIO - JOGO WAR\n\n");

//2. Caastro  dos territorios - laço para preencher os cinco itens
for (int i = 0; i <QUANT_TERRITORIOS; i++){
    printf("Territorio %d de %d:\n", i + 1, QUANT_TERRITORIOS);

    printf("Nome do Territorio: ");
    fgets(mapa [i].nome, TAM_NOME, stdin);
    mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0';

    Printf("cor do Exercito: ");
    fgets (mapa[i].cor, TAM_COR, stdin);
    mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0';


    printf("Quantidade de tropas: ");
    scanf("%d", &mapa[i].tropas);
    limparBuffer();

    Printf("-------------------\n");
}


//3. Exibição dos dados logo após o preemchimento
printf("\n=== DADOS DOS TERRITORIOS CADASTRADOS===\n");
for (int i = 0; i < QUANT_TERRITORIOS; i++) {
    printf("[%d] Territorio: %-15s | Cor: %-10s | Tropas: %d\n",
    i + 1, mapa[i].nome, mapa[i].cor, mapa[i].tropas);
}

return 0;
    
}
