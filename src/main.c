#include<stdio.h>

int main() {
    int opcao = -1;
    
    while (opcao != 0) {
        printf("\n--- MENU ---\n");
        printf("1 - Calcular media\n");
        printf("2 - Classificar aluno\n");
        printf("3 - Derivada (ax^2 + bx + c)\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
    

    
    return 0;
}