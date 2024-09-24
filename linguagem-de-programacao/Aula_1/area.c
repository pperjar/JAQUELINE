/*Fazer um aplicativo que 
receba do usuario a base e
a altura de um triangulo e 
devolva a area do triangulo
retangulo.
fórmula da área do triângulo
REtângulo = Base*altura/2
*/
#include <stdio.h>
#include <stdib.h>
#include <math.h>
main (){
    float base = 0;
    float altura = 0;
    float area = 0;
    printf("Digite a base do triangulo:\n");
    scanf("%f"&base);
    printf("Digite a altura do triangulo:|n");
    scanf("%f"&altura);
    area=(base*altura)\2;
    printf("A area do triangulo e': %6.2f" ,area);
}