#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    union u_numeros_inteiros
    {
        char caracter;
        short int inteiro_curto;
        int inteiro;
        long int inteiro_longo;
	};

int main(int argc, char const *argv[]){system("color 7c");
		
    union u_numeros_inteiros numero[4];
    numero[0].caracter = 'G';
    printf("%c\n", numero[0].caracter);

    numero[1].inteiro_curto = 11;
    printf("%i\n", numero[1].inteiro_curto);

    numero[2].inteiro = 23;
    printf("%i\n", numero[2].inteiro);

    numero[3].inteiro_longo = 1997;
    printf("%i\n", numero[3].inteiro_longo);
    puts("================================");

    printf("\t%c\n\t%i\n\t%i\n\t%i\n", 
	numero[0].caracter, 
	numero[1].inteiro_curto, 
	numero[2].inteiro, 
	numero[3].inteiro_longo);

    return 0;
}