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
    
        switch(opcao) {
            
            case 1: {
                float n1, n2, n3, media;

                printf("Digite 3 notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);

                media = (n1 + n2 + n3) / 3;
            }
        }
    }

    return 0;
}
    