#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else {
        // Defina aqui o comportamento para quando n não é igual a 1, se necessário.
        // Por exemplo, você pode retornar um valor padrão ou realizar outra ação.
        return -1; // Neste exemplo, retornamos -1 quando n não é igual a 1.
    }
}

int main(){
    int m, n;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = f(m, n);
    printf("O resultado de f(%d, %d) e %d\n", m, n, resultado);
    
    return 0;
}