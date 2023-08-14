#include <stdio.h>
#include <math.h>

int produtorec(int x1, int x2){  //definição da função
    if (x1 == 0 || x2 == 0){ //instruções da função para determinar se y=x1x2
        return 0;
    } else if (x2 < 0){
        return - produtorec(x1, -x2);
    } else{
        return x1 + produtorec(x1, x2 - 1);
    }
}

int main() {

    int x1, x2, result; // declaração das variáveis x1 e x2

    printf("Digite o valor de x1: ");
    scanf("%d", &x1);
    printf("Digite o valor de x2: ");
    scanf("%d", &x2);
    
    result = produtorec(x1, x2); //chama a função do produto recursivo
    printf("O produto %d * %d = %d\n", x1, x2, result); //exibe o resultado
    
    return (0);
}