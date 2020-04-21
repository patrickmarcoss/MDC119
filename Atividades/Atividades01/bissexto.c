#include "stdio.h"
#include "stdbool.h"


int main()
{
	
	int ano;
	bool bissexto;
	//função do tipo bool, ela retorna um valor booleano (true ou false).
 
	printf("Escreva o ano: ");
	scanf("%d", &ano);
 
	if (ano % 400 == 0) {
		bissexto = true;		
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = true;		
	}
	else {
		bissexto = false;
	} 
	if (bissexto == true) {
		printf("O ano e bissexto!");
	} else {
		printf("O ano nao e bissexto!");
	}
}