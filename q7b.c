#include <stdio.h>

int f(int m, int n) {
    if (m == 1) {
        return n + 1;
    } else {
        
        return -1; 
    }
}

int main() {
    int m, n;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = f(m, n);
    printf("O resultado de f(%d, %d) é %d\n", m, n, resultado);
    
    return 0;
}