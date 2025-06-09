#include <stdio.h>

int main(){
    int i = 1;

    printf("Torre:\n");

    while (i <= 5){
        printf("%d - Direita\n", i);

        i++;
    }

    printf("\n");
    printf("A torre moveu 5 casas para a direita. Saindo...\n");
    printf("\n");

    i = 0;

    printf("Bispo:\n");

    do{
        if (i % 2 != 0) {
            printf("%d - Cima Direita\n", i);
        }

        i++;
    } while (i <= 10);

    printf("\n");
    printf("O Bispo moveu 5 casas na diagonal. Saindo...\n");
    printf("\n");

    printf("Rainha:\n");

    for (i = 0; i >= -8; i--){
        if (i < 0){
            printf("%d - Esquerda\n", i);
        }
    }
    
    printf("\n");
    printf("A rainha moveu 8 casas para a esquerda. Saindo...\n");
    printf("\n");

  return 0;
}