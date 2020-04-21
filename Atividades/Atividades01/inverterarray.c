#include <stdio.h>
#include <stdlib.h>
int main()
{
	
    int a, b;
    int Numeros[10];
    for (a = 0;a<10;a++)
    {
    puts("Digite um numero: ");
    scanf("%d", &Numeros[a]);
    puts("\n");
    fflush(stdin);
 
    }
    for (b = 9; b >= 0; b--)
    {
        printf("%d\n", Numeros[b]);

    }
    return 0;
}