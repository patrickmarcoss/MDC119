#include <stdio.h>
#include <stdlib.h>

struct s_aluno {
    int matricula;
    char nome[30];
    float media;
    };
main(int argc, char const *argv[])

    fflush(stdout);
    
    struct s_aluno aluno, *ptr = &aluno;
    
	puts("DESCRICAO:\n");
    aluno.media = 9.0;
    aluno.matricula = 1922082013;
    strcpy(aluno.nome, "Patrick");
    printf("%s\n", ptr->nome);
    printf("%d\n", ptr->matricula);
    printf("%.2f\n", ptr->media);

    return (0);
}