#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int total = 0; 
    struct funcionario_t
    {
        char nome[50];
        double salario;
        char admissao[10];
    } funcionarios[100], funcionario;
    scanf("%s", funcionario.nome);
    while (!strcmp(funcionario.nome, "0"))
    {
        scanf("%lf", funcionario.salario);
        scanf("%s", funcionario.admissao);
        funcionarios[total++] = funcionario;
        scanf("%s", funcionario.nome);
    }
    for (int i = 0; i < total; i++)
    {
        printf("%s,%2lf,%s", funcionario.nome, funcionario.salario, funcionario.admissao);
    }
    return 0;
}