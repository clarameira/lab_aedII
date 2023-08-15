#include <stdio.h>

int inverter_numero_recursivo(int numero, int posicao){ //definicao da funcao recursiva
    if (numero == 0){ //verificacao 
        return 0;
    }
    
    int digito = numero % 10;
    int potencia = 1;
    for (int i = 0; i < posicao; i++){ //calculo da funcao
        potencia *= 10;
    }
    
    return digito * potencia + inverter_numero_recursivo(numero / 10, posicao + 1); //retornar a funcao recursiva
}

int main() {
    int numero_original; //declaracao do tipo do numero 
    printf("Digite um numero: ");
    scanf("%d", &numero_original);
    
    int numero_invertido = inverter_numero_recursivo(numero_original, 0);
    printf("O numero invertido de %d é %d\n", numero_original, numero_invertido); //exibir resultado
    
    return 0;
}