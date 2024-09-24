#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
int num; //receber o numero pelo teclado
int i; //contador
printf("Digite umnúmero inteiro:\n");
scanf("%d",&num);
for(i=0;i<=10;i++)
    printf("%d x %d = %d \n",num, i, num*i);
}

