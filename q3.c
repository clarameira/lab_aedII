#include <stdio.h>
#include <math.h>

int main(){
    int valor, hipotenusa, raizhipotenusa;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    printf("Triplos pitagóricos:\n");
    for (int cateto1 = 1; cateto1 <= valor; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= valor; cateto2++){  //Iniciamos dois loops aninhados: o primeiro loop itera pelo cateto1, variando de 1 até o valor máximo fornecido (valor). O segundo loop itera pelo cateto2, iniciando a partir do valor de cateto1 atual e também indo até o valor máximo.
            hipotenusa = cateto1 * cateto1 + cateto2 * cateto2; //Dentro dos loops, calculamos a soma dos quadrados dos catetos, que é a hipotenusa ao quadrado. Também calculamos a raiz quadrada da hipotenusa utilizando a função sqrt da biblioteca math.h.
            raizhipotenusa = sqrt(hipotenusa);

            if (raizhipotenusa * raizhipotenusa == hipotenusa && raizhipotenusa <= valor){ //Verificamos se o quadrado da raiz quadrada da hipotenusa é igual à hipotenusa, o que significa que temos um triplo pitagórico. Além disso, verificamos se a raiz quadrada da hipotenusa é menor ou igual ao valor máximo fornecido (valor). Se ambas as condições forem verdadeiras, imprimimos os valores do cateto1, cateto2 e da raiz quadrada da hipotenusa, que formam um triplo pitagórico.
                printf("%d, %d, %d\n", cateto1, cateto2, raizhipotenusa);
            }
        }
    }

    return (0);
}


