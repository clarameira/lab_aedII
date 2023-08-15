#include <stdio.h>
#include <stdlib.h>

int isPerfect(int num) {
    int soma = 0, i;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num) {
        return 1; // Retorna 1 para indicar que o número é perfeito.
    } else {
        return 0; // Retorna 0 para indicar que o número não é perfeito.
    }
}

int main() {
    int numero, result;

    printf("Digite um número para verificar se é perfeito: ");
    scanf("%d", &numero);

    result = isPerfect(numero);

    if (result == 1) {
        printf("%d e um numero perfeito.\n", numero);
    } else {
        printf("%d nao e um numero perfeito.\n", numero);
    }

    return 0;
}
