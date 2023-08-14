#include <stdio.h>
#include <stdlib.h>

int contarDias(int dia, int mes, int ano) {
    int diasPorMesFixo[13];  // O array tem 13 elementos para corresponder aos meses de 1 a 12
    for (int i = 1; i <= 12; i++) {
        diasPorMesFixo[i] = 30;  // Definindo todos os meses com 30 dias
    }

    int dias = dia;
    for (int i = 1; i < mes; i++) {
        dias += diasPorMesFixo[i];
    }
    return dias;
}

int diasDeAula(int diaAtual, int mesAtual, int anoAtual, int diaUltimo, int mesUltimo, int anoUltimo) {
    int diasHoje = contarDias(diaAtual, mesAtual, anoAtual);
    int diasUltimoDia = contarDias(diaUltimo, mesUltimo, anoUltimo);
    return diasUltimoDia - diasHoje + 1;
}

int main(){

    int diaAtual, mesAtual, anoAtual, diaUltimo, mesUltimo, anoUltimo;

    printf("Digite o dia de hoje: ");
    scanf("%d", &diaAtual);

    printf("Digite o mês de hoje: ");
    scanf("%d", &mesAtual);

    printf("Digite o ano de hoje: ");
    scanf("%d", &anoAtual);

    printf("Digite o dia do último dia do semestre: ");
    scanf("%d", &diaUltimo);

    printf("Digite o mês do último dia do semestre: ");
    scanf("%d", &mesUltimo);

    printf("Digite o ano do último dia do semestre: ");
    scanf("%d", &anoUltimo);

    int aulasLaboratorio = (diasDeAula(diaAtual, mesAtual, anoAtual, diaUltimo, mesUltimo, anoUltimo) / 7 ) * 2;
    printf("Total de aulas de laboratório correspondem a: %d aulas.\n", aulasLaboratorio);

    return (0);
}