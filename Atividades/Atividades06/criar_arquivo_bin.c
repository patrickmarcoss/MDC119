#include <stdio.h>

int main(){

FILE *arq;

arq = fopen("C:\\Users\\patrick\\Desktop\\atividades\\ativi6\\dados.bin","rb");

if (arq == NULL)
{
    puts("O arquivo nao foi aberto!\n");
    return 1;
}
else
   {
     puts("O arquivo foi criado e aberto!\n");
   }
puts("Enter 2 vezes para sair");
getchar();

fclose(arq);


return 0;
}