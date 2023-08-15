#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPerfect(int num){
    int soma = 0, i; //Declaramos e inicializamos a variável sum com 1. Essa variável será usada para armazenar a soma dos fatores do número.
    for (i = 1; i <= num; i++){ //Iniciamos um loop for que começa com i igual a 2 e continua até que i * i seja menor ou igual ao número num. Isso é uma otimização para percorrer apenas os possíveis fatores até a raiz quadrada do número.
        if (num % i == 0){ //Dentro do loop, verificamos se o número num é divisível por i (ou seja, i é um fator do número).
            soma += i; //Se i for um fator, adicionamos i à variável sum. Também verificamos se i não é igual ao quociente de num / i. Se não forem iguais, adicionamos num / i à sum. Isso é feito para evitar a contagem duplicada de fatores iguais (por exemplo, 4 em 16)
        }
    }
    if (soma == num){
        return soma;
    }//Finalmente, a função isPerfect retorna 1 (verdadeiro) se a soma dos fatores (sum) for igual ao número num, caso contrário, retorna 0 (falso).
}

int main(){

    int numero, result;

    printf("Digite um número para verificar se é perfeito: ");
    scanf("%d", &numero);

    result = isPerfect(numero);

    if (result == numero){
        printf("%d e um numero perfeito.\n", numero);
    } else{
        printf("%d nao e um numero perfeito.\n", numero);
    }
    return (0);
}