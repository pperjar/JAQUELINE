#include <stdio.h>
#include <stdlib.h>
main(){
    int i; //variavel controladora
    int num; //armazena numero 
    int maior=0 ;//armazena mumero maior
   printf("Digite 10 valores: \n");
   for (i = 0; i< 10; i++)
   {
   scanf("%d",&num);
   if(num>maior)
       maior=num;
   }
   printf("o numero maior e:%d \n" , maior);
}