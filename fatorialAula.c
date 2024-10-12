#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, fat=1, i, result;
int fatorial(int num);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");

    printf ("Entre o o número para calculo do fatorial = ");
    scanf ("%i", &num);

    result = fatorial(num);
    printf("Resultado do fatorial = %i \n", result);
	return 0;
}

int fatorial(int num){
    for(i=1; i<=num; i++){
        fat *= i;
    }
    return fat;
}

