#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Função que calcula o fatorial
int fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        return numero * fatorial(numero - 1);
    }
}

int main() {
    int numero, resultado;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula o fatorial usando a função
    resultado = fatorial(numero);

    // Exibe o resultado
    printf("O fatorial de %d é: %d\n", numero, resultado);

    return 0;
}
