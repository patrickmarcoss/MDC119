#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){system("color 7c");

    int x = 23;
    int *ptr = &x;

    printf("%p\n", ptr);
    printf("%i\n", *ptr);

    *ptr = 1997;

    printf("%i\n", *ptr);

    return (0);
}