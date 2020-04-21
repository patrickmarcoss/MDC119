#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char const *argv[]){system("color 7c");

    char string[30];
    int i;

    strcpy(string, "Eu gosto de C!\n");setlocale(LC_ALL, "Portuguese");

    char *p = string;//será a string escrita entre aspas.

    while (*p != 0){
        printf("%c", *p);
        p++;
    }
    
    return (0);
}