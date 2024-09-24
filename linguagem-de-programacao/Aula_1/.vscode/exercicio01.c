#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main(){
    int idade;
    char nome;
    printf("digite seu nome:\n");
    scanf("%s",&nome);
    printf("digite sua idade:\n");
    scanf("%d",&idade);
    printf("A idade do %s e' %d anos\n",nome,idade);
}