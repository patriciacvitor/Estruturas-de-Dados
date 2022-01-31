/*
A base do logaritmo natural é a constante irracional e = 2.7182818284590452353602874...
e é caracterizada de várias formas. Uma delas é pela série infinita
e = 1 + 1/1! + 1/2! + 1/3! + ...
Escreva um programa para calcular e pela soma de k termos da série e imprimir o resultado.

Entrada e saída:
A entrada tem um único número inteiro k maior ou igual a 1.
A saída é o valor de e com 12 dígitos à direita do ponto impressa em uma linha,
como ilustrado abaixo. Observe que deve haver um fim de linha (\n) depois do valor de e.

Entrada | Saída:
1       | e=1.000000000000
7       | e=2.718055555556
*/

#include <stdio.h>

double calcula_e(int k) {
    double valor_e, fatorial = 1;

    if ((k == 1) || (k == 2))
        return k;
    else {
        valor_e = 2;
        for (int i = 2; i < k; i++) {
            fatorial *= i; // Calcula o fatorial (do denominador)
            valor_e += (1.0 / fatorial);
        }
        return valor_e;
    }
}

int main(void) {
    int k;
    double e;

    scanf("%d", &k); // Número de termos k>=1
    e = calcula_e(k); // Calcula e a partir do número de termos k
    printf("e=%.12f\n", e);

    return 0;
}