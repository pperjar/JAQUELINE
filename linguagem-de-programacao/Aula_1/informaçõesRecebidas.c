#include<stdio.h>
#include<stdlib.h>
main(){
    char nome[50];
    char endereco[50];
    int telefone;
    printf("Digite seu nome:\n");
    scanf("%49s", &nome);

    printf("Digite seu endereco:\n");
    scanf("%48s",&endereco);
    printf("Digite seu telefone:\n");
    scanf("%d",&telefone);

    printf("nome:%s\n",nome);
    printf("endereco:%s\n",endereco);
    printf("telefone:%s\n",telefone);


}