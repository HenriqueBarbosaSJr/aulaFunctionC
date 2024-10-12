#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int numero) {
    int fatorial = 1;
    for(int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero;
    
    // Solicita um número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        // Chama a função e exibe o resultado
        int resultado = calcularFatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }
    
    return 0;
}
