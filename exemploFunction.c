#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void  msg();

int main() {
	 setlocale(LC_ALL, "Portuguese_Brazil");
	 


    msg();
	return 0;
}

void  msg(){
    printf("Sistema desenvolvido por \nHenrique Barbosa");
}
