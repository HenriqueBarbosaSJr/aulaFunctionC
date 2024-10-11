#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void  msg();
int  num();
float media(float A, float B);

int main() {
	 setlocale(LC_ALL, "Portuguese_Brazil");
	 int numero;
     float result;

    msg();
    numero = num();
    printf("\n%i\n", numero);

    result = media(5.6 , 8.7);
    printf("\n%f\n", result);

	return 0;
}

void  msg(){
    printf("Sistema desenvolvido por \nHenrique Barbosa\n");
}

int num(){
    return 876;
}

float media(float A, float B){
    return (A+B)/2;
}