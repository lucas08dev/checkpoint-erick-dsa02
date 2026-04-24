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
                printf("Media = %.2f\n", media);
                break;
 
            }

            case 2: {
                float media;

                printf("Digite a media: ");
                scanf("%f", &media);

                if (media >= 7) {
                printf("Aprovado\n");
                } else if (media >= 5) {
                printf("Recuperacao\n");
                } else {
                printf("Reprovado\n");
                }
                break;
            }
            case 3: {
                float a, b, c;

                printf("Funcao: ax^2 + bx + c\n");
                printf("Digite a, b e c: ");
                scanf("%f %f %f", &a, &b, &c);

                printf("Derivada: %.2fx + %.2f\n", 2*a, b);
                break;
            }

    }

    return 0;
}
    