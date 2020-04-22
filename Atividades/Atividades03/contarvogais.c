#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int conta_vogais(char *ptr){
    int quant = 0;

    while(*ptr != 0){
        
        if(strchr("aAeEiIoOuU", *ptr)){
        quant++;
        ptr++;
        }
        else{
            ptr++;
        }
    }
    return(quant);
}

int main(int argc, char const *argv[]){

    int q;
    char frase[100];
    
    printf("Escreva a frase para ser contado as vogais: \n");
    gets(frase);
    

    q = conta_vogais(frase);

    printf("\nQuantidade de vogais na frase sao '%s': \n -> %d\n", frase ,q);
    
    return 0;
}