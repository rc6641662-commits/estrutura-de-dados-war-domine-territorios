#include <stdio.h>
#include <string.h>

#define TOTAL 5

// Struct do território
struct Territorio {
    char nome[50];
    char corExercito[30];
    int tropas;
};

int main() {

    struct Territorio territorios[TOTAL];

    // Cadastro dos territórios
    for(int i = 0; i < TOTAL; i++) {

        printf("\n=== Territorio %d ===\n", i + 1);

        printf("Nome do territorio: ");
        fgets(territorios[i].nome, 50, stdin);

        // Remove o \n do fgets
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor do exercito: ");
        fgets(territorios[i].corExercito, 30, stdin);

        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);

        getchar(); // limpa o ENTER do buffer
    }

    // Exibição dos dados
    printf("\n\n===== MAPA ATUAL =====\n");

    for(int i = 0; i < TOTAL; i++) {

        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Exercito: %s\n", territorios[i].corExercito);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}