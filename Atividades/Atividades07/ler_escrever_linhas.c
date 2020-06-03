#include "stdio.h"
#include "stdlib.h"

int main(void)
{
FILE *arq;
char nome_e_matricula[40];
//char matricula[10];

if((arq = fopen("C:\\Users\\patrick\\Desktop\\atividades\\ativi7\\Aluno2.txt", "w+"))== NULL)
{
perror("Descricao do erro:");
exit(1);
}
while(1)
{
printf("Digite o Nome e matricula || ou sair(para sair)||Aperte espaco para nome e matricula:\n");
	fgets(nome_e_matricula, 40, stdin);
	nome_e_matricula[strlen(nome_e_matricula) - 1] = '\0';	
if(strcmp("sair", nome_e_matricula))
{
//fprintf(arq, "%s\n", nome_e_matricula);
fprintf(arq, "[%s]\n", nome_e_matricula);
}
else{	
break;
}}
fclose(arq);


return 0;
}