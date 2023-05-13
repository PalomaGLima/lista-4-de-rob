/*01. Faça um programa que receba um número n e preencha um vetor com n números. Supondo que o vetor digitado foi [1, 2, 3, 4], imprima-o da seguinte maneira: (1) (2) (3) (4).*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    // Solicita ao usuário que digite os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Imprime o vetor formatado
    printf("Vetor formatado: ");
    for (int i = 0; i < n; i++) {
        printf("(%d) ", vetor[i]);
    }

    return 0;
}






