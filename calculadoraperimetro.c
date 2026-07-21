#include <stdio.h>
#include <math.h>

float perimetroquadrado(float lado){
    return lado*4;
}
float perimetrotriangulo(float lado1, float lado2, float lado3){
    return lado1 + lado2+ lado3;
}

float perimetroretangulo(float base, float altura){
    return 2*(base+ altura);
}

float perimetrocirculo(float raio){
    return 2*3.1415*raio;
}

int main(){
    int opcao;
    float a , b , c;

     printf("\n============== Calculadora =================");
      printf("\n============== De perimetro!!! =================");

     
    printf("\n by: bruh.\n");
    printf("1-- quadrado\n");
    printf("2-- triangulo (TRICAS KAKAKAAKAK)\n");
    printf("3-- retangulo\n");
    printf("4-- circuferencia\n");

    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("Digite o lado:");
        scanf("%f", &a);

        printf("Perimetro = %2.f\n", perimetroquadrado(a));
        break;



         case 2:
        printf("Digite o lado:");
        scanf("%f", &a);

        printf("Digite o lado:");
        scanf("%f", &b);
        
        printf("Digite o lado:");
        scanf("%f", &c);

        printf("Perimetro = %2.f\n", perimetrotriangulo(a , b , c));
        break;

        
         case 3:
        printf("Digite o base:");
        scanf("%f", &a);

        printf("Digite o altura:");
        scanf("%f", &b);
    

        printf("Perimetro = %2.f\n", perimetroretangulo(a , b));
        break;


        case 4:
        printf("Digite o raio:");
        scanf("%f", &a);

        printf("Perimetro = %2.f\n", perimetrocirculo(a));
        break;

        default:
        printf("Opcao invalida");
    }
        return 0;
}