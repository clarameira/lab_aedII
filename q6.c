#include <stdio.h>

int invertido(int numero){ //definindo a função de inverter
    int numero_invertido = 0;
    while (numero > 0){ //instruções para inversão do número 
        int digito = numero % 10;
        numero_invertido = numero_invertido * 10 + digito;
        numero /= 10;
    }
    return numero_invertido;
}

int main(){
    int numero; //declaração do tipo do número
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    int numero_invertido = invertido(numero); //chamada da função para obter o número invertido
    printf("O numero invertido de %d e %d\n", numero, numero_invertido); //exibe o resultado
    
    return (0);
}