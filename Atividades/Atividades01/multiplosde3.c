#include <stdio.h>

int main () {
	
    int mult;
    for(mult=1; mult<100; mult++){
        if (mult%3==0){
            printf ("%d\n", -mult);
        }
    }
    //atividade01/arquivo02 esqueci de colocar na hora do commit, desculpa
    return 0;
}